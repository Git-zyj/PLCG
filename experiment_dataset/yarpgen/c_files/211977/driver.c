#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5120;
unsigned short var_4 = (unsigned short)16921;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_6 = 4869899227569319625ULL;
unsigned long long int var_8 = 14058866420692847632ULL;
unsigned long long int var_10 = 8773917996853572250ULL;
long long int var_11 = -5951775116620857479LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -3802677318264716064LL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
signed char var_15 = (signed char)31;
long long int var_16 = -2166581658780579172LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-21;
long long int var_19 = -180802122046980136LL;
signed char var_20 = (signed char)-12;
signed char var_21 = (signed char)-51;
short var_22 = (short)-12025;
unsigned long long int var_23 = 13619562447090389512ULL;
unsigned short var_24 = (unsigned short)47935;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-56;
_Bool arr_0 [14] [14] ;
short arr_1 [14] ;
_Bool arr_2 [21] [21] ;
short arr_3 [21] ;
unsigned int arr_7 [13] ;
signed char arr_4 [21] ;
_Bool arr_9 [13] ;
_Bool arr_10 [13] [13] [13] ;
unsigned int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-10606;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-7787;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1806648836U : 2508268069U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 2319855146U : 3449980978U;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
