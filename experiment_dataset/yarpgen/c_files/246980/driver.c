#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned long long int var_1 = 7823537626631078740ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 2596926218U;
int var_11 = -477472212;
unsigned char var_12 = (unsigned char)243;
long long int var_14 = 1066778451554085144LL;
unsigned long long int var_15 = 3268734765939374038ULL;
int zero = 0;
unsigned long long int var_17 = 10167481037935915454ULL;
unsigned char var_18 = (unsigned char)187;
unsigned char var_19 = (unsigned char)102;
int var_20 = 1347035723;
int var_21 = -2098757841;
unsigned short var_22 = (unsigned short)43932;
unsigned short var_23 = (unsigned short)63328;
unsigned short var_24 = (unsigned short)37562;
unsigned long long int arr_1 [12] ;
signed char arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
unsigned char arr_4 [12] ;
short arr_5 [12] [12] [12] ;
short arr_7 [12] [12] [12] ;
unsigned int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2111419880994253692ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 966517400U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)24662;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-7947;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 345970985U : 2402136779U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
