#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1151646116;
signed char var_1 = (signed char)-29;
signed char var_3 = (signed char)-72;
unsigned long long int var_4 = 12607653405750401888ULL;
signed char var_7 = (signed char)11;
unsigned long long int var_8 = 6361659512341529740ULL;
unsigned int var_10 = 3605874788U;
int var_11 = 1487221577;
unsigned long long int var_12 = 2100166167625197379ULL;
int var_14 = 485926542;
int var_15 = -2054343454;
unsigned int var_16 = 1332826707U;
unsigned long long int var_17 = 9978728561823759738ULL;
int zero = 0;
int var_20 = 307894595;
int var_21 = 326698640;
unsigned long long int var_22 = 391464958778682813ULL;
int var_23 = -1801021221;
unsigned long long int var_24 = 5191019903613625351ULL;
unsigned long long int var_25 = 431271904081531129ULL;
signed char var_26 = (signed char)-89;
int var_27 = -1598991492;
signed char var_28 = (signed char)-82;
unsigned long long int var_29 = 13154879731811474116ULL;
unsigned int var_30 = 55794194U;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
signed char arr_5 [20] [20] ;
int arr_7 [20] ;
unsigned long long int arr_9 [20] [20] ;
unsigned long long int arr_10 [10] ;
unsigned long long int arr_11 [10] ;
unsigned long long int arr_12 [10] [10] ;
unsigned int arr_2 [20] [20] ;
unsigned long long int arr_13 [10] [10] ;
unsigned long long int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 14762839802355328979ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2022441528001696373ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6403665946667525451ULL : 2219059651457889506ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1543624620923675116ULL : 13869242710974995940ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)16 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1885978008;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 5533997998330364453ULL : 9217108657143516747ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 12445496501693080467ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 7599530866863763555ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 13724570844013162710ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 621120870U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 15908065059724730667ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 4511434052784050776ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
