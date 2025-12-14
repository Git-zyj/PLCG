#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2484692260U;
unsigned int var_1 = 2790654356U;
unsigned short var_2 = (unsigned short)11979;
signed char var_5 = (signed char)(-127 - 1);
unsigned int var_6 = 3439055667U;
signed char var_8 = (signed char)98;
unsigned short var_9 = (unsigned short)30928;
unsigned long long int var_12 = 5606384798956109316ULL;
int zero = 0;
signed char var_13 = (signed char)126;
unsigned long long int var_14 = 6708551869480222013ULL;
unsigned int var_15 = 2708454430U;
int var_16 = 705421422;
unsigned short var_17 = (unsigned short)32897;
unsigned int var_18 = 2750147640U;
unsigned int var_19 = 3733099217U;
unsigned char var_20 = (unsigned char)42;
int var_21 = 1939294290;
unsigned short var_22 = (unsigned short)31630;
int var_23 = 1676174133;
unsigned int var_24 = 1614641855U;
int var_25 = 1112055006;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned short arr_5 [21] [21] ;
short arr_6 [21] ;
unsigned char arr_7 [11] ;
unsigned char arr_9 [16] [16] ;
unsigned int arr_10 [16] ;
signed char arr_11 [16] [16] ;
unsigned long long int arr_3 [25] ;
_Bool arr_12 [16] [16] ;
_Bool arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)32 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)16128;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-12408;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1645368383U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5115061006509561349ULL : 10232856907819422497ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
