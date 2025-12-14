#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-26;
unsigned int var_2 = 2780476903U;
short var_3 = (short)-14200;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-18754;
unsigned short var_7 = (unsigned short)41162;
unsigned int var_8 = 1386159965U;
signed char var_9 = (signed char)-116;
short var_10 = (short)-17078;
unsigned int var_11 = 950162845U;
long long int var_12 = -5978638377295335872LL;
long long int var_13 = 4065246883127048534LL;
int zero = 0;
unsigned int var_15 = 3372911791U;
unsigned char var_16 = (unsigned char)36;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-53;
signed char var_19 = (signed char)-52;
unsigned char var_20 = (unsigned char)160;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)67;
unsigned int var_24 = 862170066U;
short var_25 = (short)-25905;
long long int arr_0 [23] ;
long long int arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
short arr_4 [23] ;
_Bool arr_6 [23] [23] [23] [23] ;
signed char arr_10 [22] [22] ;
signed char arr_13 [22] ;
int arr_16 [22] [22] ;
short arr_7 [23] [23] [23] ;
_Bool arr_8 [23] ;
long long int arr_9 [23] ;
unsigned int arr_14 [22] ;
unsigned char arr_15 [22] ;
short arr_18 [22] [22] ;
short arr_21 [18] ;
unsigned long long int arr_22 [18] ;
unsigned long long int arr_23 [18] ;
_Bool arr_24 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2626445913848415024LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 3928816169676735294LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3718241870U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2618823821709081656ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)3968;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)58 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = -1694494328;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-21599;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 6986428877671337846LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1739392707U : 1546779258U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-24796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (short)-15716;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = 7853862960386810003ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 2858367202873905991ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
