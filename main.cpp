#include <iostream>
using namespace std;

char getGrade(float avg)
{
    if (avg >= 80)
        return 'A';
    else if (avg >= 70)
        return 'B';
    else if (avg >= 60)
        return 'C';
    else if (avg >= 50)
        return 'D';
    else
        return 'F';
}

int main()
{
    int students;
    cout<<"Enter number of students:";
    cin>>students;

    string name[10];          // 1D array for names
    int marks[10][3];         // 2D array for marks
    int total[10];            // 1D array for total
    float average[10];        // 1D array for average
    char grade[10];           // 1D array for grades

    for (int i = 0; i < students; i++)
    {
        cout<<"Enter name of student " << i + 1 << ": "<<endl;
        cin>>name[i];

        total[i] = 0;

        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter marks of subject " << j + 1 << ": ";
            cin>>marks[i][j];
            total[i] += marks[i][j];   // arithmetic operator
        }

        average[i] = total[i] / 3.0;
        grade[i] = getGrade(average[i]);
    }

    // Output
    cout << "\n------ STUDENT RESULT ------\n";
    for (int i = 0; i < students; i++)
    {
        cout<<"\nName: " << name[i];
        cout<<"\nMarks: ";
        for (int j = 0; j < 3; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << "\nTotal: " << total[i];
        cout << "\nAverage: " << average[i];
        cout << "\nGrade: " << grade[i] << endl;
    }

    return 0;
}
