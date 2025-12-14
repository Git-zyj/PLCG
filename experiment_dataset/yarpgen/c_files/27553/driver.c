#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14028618021243011785ULL;
unsigned long long int var_2 = 12341118811585496450ULL;
unsigned long long int var_5 = 8224682372510158653ULL;
unsigned long long int var_6 = 2236385267958212881ULL;
unsigned long long int var_8 = 6933261165119147514ULL;
unsigned long long int var_11 = 9305999779520031215ULL;
unsigned long long int var_12 = 4327542918492746904ULL;
unsigned long long int var_13 = 15746944111440849039ULL;
unsigned long long int var_15 = 7037494697757318889ULL;
int zero = 0;
unsigned long long int var_20 = 8422746428863641290ULL;
unsigned long long int var_21 = 9386671833061022206ULL;
unsigned long long int var_22 = 6912758318993376852ULL;
unsigned long long int var_23 = 4424220584653959154ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_3 [15] [15] ;
unsigned long long int arr_4 [15] [15] ;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 8861315438286386900ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13520639235366932637ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 12399887946486582503ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 13663022214809725007ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 13263041487112234916ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
