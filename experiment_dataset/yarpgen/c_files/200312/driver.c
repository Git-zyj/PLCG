#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13584797629898435137ULL;
unsigned long long int var_2 = 7364029119897282627ULL;
long long int var_5 = -747984886232193450LL;
unsigned long long int var_8 = 1979019510339988190ULL;
unsigned long long int var_13 = 2894836737412944640ULL;
int var_14 = 1555024682;
signed char var_15 = (signed char)76;
int var_17 = 923362234;
int zero = 0;
unsigned int var_19 = 1488601687U;
unsigned int var_20 = 2863075586U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12238704982153314057ULL;
unsigned int var_23 = 1672806082U;
_Bool var_24 = (_Bool)1;
int var_25 = -1506152114;
unsigned short var_26 = (unsigned short)44875;
unsigned char var_27 = (unsigned char)12;
unsigned int var_28 = 225736944U;
short var_29 = (short)-5161;
signed char var_30 = (signed char)-90;
unsigned long long int var_31 = 11960123337525923373ULL;
unsigned short var_32 = (unsigned short)24834;
unsigned short arr_0 [18] ;
short arr_1 [18] [18] ;
short arr_2 [18] ;
unsigned long long int arr_3 [18] [18] ;
signed char arr_4 [18] ;
short arr_5 [18] [18] [18] ;
int arr_6 [18] [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned int arr_8 [18] ;
int arr_18 [18] ;
unsigned long long int arr_9 [18] ;
unsigned int arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)38247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5496;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-15244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 6896909463721475655ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)332;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -664089521;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -48249962322428105LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 1729108521U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 341941688;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 18028356910981426752ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 884410511U;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
