#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -430952279;
unsigned long long int var_6 = 16604892117006681261ULL;
unsigned int var_12 = 4252557934U;
long long int var_14 = 5552862372750741898LL;
unsigned char var_16 = (unsigned char)76;
unsigned char var_19 = (unsigned char)99;
int zero = 0;
unsigned short var_20 = (unsigned short)43339;
unsigned short var_21 = (unsigned short)56400;
int var_22 = 800589620;
unsigned char var_23 = (unsigned char)57;
unsigned short var_24 = (unsigned short)27132;
unsigned char arr_0 [18] ;
int arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
long long int arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
unsigned long long int arr_6 [18] [18] ;
unsigned short arr_11 [18] ;
unsigned int arr_7 [18] ;
long long int arr_8 [18] [18] [18] ;
unsigned char arr_12 [18] ;
unsigned int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 513061687;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1656618497U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -493090720254077288LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 12911378679873685667ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25316 : (unsigned short)17112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2840337754U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -4335301158947532934LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 455857157U : 1419156162U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
