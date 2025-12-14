#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
_Bool var_2 = (_Bool)1;
long long int var_5 = -1982342500733749294LL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)30605;
unsigned int var_11 = 2483835530U;
unsigned short var_12 = (unsigned short)19142;
int var_13 = 2018390002;
long long int var_14 = -5105035970874874948LL;
signed char var_15 = (signed char)119;
short var_16 = (short)10998;
unsigned long long int var_17 = 4325725002381181475ULL;
signed char var_18 = (signed char)8;
short var_19 = (short)21970;
int zero = 0;
short var_20 = (short)-11432;
unsigned short var_21 = (unsigned short)48488;
unsigned short var_22 = (unsigned short)4788;
int var_23 = -1467513762;
unsigned long long int var_24 = 15848292364267736691ULL;
short var_25 = (short)21349;
unsigned short var_26 = (unsigned short)48230;
unsigned short var_27 = (unsigned short)3822;
long long int var_28 = 8751376279987656888LL;
_Bool arr_0 [10] [10] ;
_Bool arr_1 [10] [10] ;
short arr_10 [16] ;
short arr_11 [16] [16] ;
int arr_12 [16] ;
unsigned char arr_13 [16] [16] ;
unsigned char arr_18 [15] ;
unsigned int arr_8 [13] ;
long long int arr_9 [13] ;
short arr_14 [16] [16] ;
_Bool arr_22 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)26730;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-9746;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 858414185;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 476982313U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 2872942761735687874LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-17422;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
