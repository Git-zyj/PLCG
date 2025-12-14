#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15899;
unsigned long long int var_1 = 2821066434247983685ULL;
unsigned long long int var_2 = 15793640971851087929ULL;
unsigned long long int var_4 = 16238203331601499252ULL;
int var_7 = 1952653358;
short var_9 = (short)2753;
short var_10 = (short)-14159;
int zero = 0;
int var_11 = -1893509228;
short var_12 = (short)28949;
unsigned long long int var_13 = 1940252114274800939ULL;
int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
int arr_3 [12] ;
long long int arr_4 [12] [12] ;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1449736325;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 523165188611692456ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1531459056 : 1826001218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 8587080957473658391LL : 1529349305620375669LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -634426690 : -664506064;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
