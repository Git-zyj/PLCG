#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54935;
short var_1 = (short)-12592;
short var_2 = (short)-16465;
signed char var_4 = (signed char)75;
int var_5 = -402328991;
short var_6 = (short)21636;
unsigned int var_7 = 1653890924U;
unsigned char var_8 = (unsigned char)225;
int var_9 = -1609163670;
unsigned long long int var_10 = 13176600573062165100ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 378801237547790695LL;
unsigned long long int var_14 = 10377684109013276281ULL;
int var_15 = 1311000303;
unsigned int var_16 = 2051497070U;
short var_17 = (short)-20536;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1916075359U;
unsigned int var_20 = 271486900U;
short var_21 = (short)21744;
unsigned short var_22 = (unsigned short)24852;
signed char var_23 = (signed char)-97;
unsigned int var_24 = 3899591056U;
unsigned short var_25 = (unsigned short)34553;
_Bool var_26 = (_Bool)0;
unsigned short arr_0 [21] ;
_Bool arr_1 [21] [21] ;
int arr_2 [21] [21] [21] ;
short arr_3 [21] ;
unsigned int arr_10 [13] [13] [13] [13] ;
short arr_11 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)53757;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2086592611 : 599535704;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)19046 : (short)-2471;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 146241001U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)16626;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
