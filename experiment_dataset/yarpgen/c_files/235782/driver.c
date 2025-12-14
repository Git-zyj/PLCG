#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)45;
unsigned char var_6 = (unsigned char)230;
short var_7 = (short)5078;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)18;
unsigned char var_11 = (unsigned char)61;
short var_13 = (short)-19804;
int zero = 0;
unsigned char var_14 = (unsigned char)52;
unsigned char var_15 = (unsigned char)16;
long long int var_16 = 2964668998191345329LL;
signed char var_17 = (signed char)-12;
unsigned char var_18 = (unsigned char)132;
unsigned short var_19 = (unsigned short)20085;
_Bool var_20 = (_Bool)1;
signed char arr_1 [20] [20] ;
unsigned short arr_2 [20] ;
unsigned char arr_3 [20] [20] ;
unsigned long long int arr_4 [20] [20] ;
_Bool arr_7 [20] [20] [20] ;
unsigned long long int arr_9 [15] ;
int arr_10 [15] [15] ;
unsigned char arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)598;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 17782958958679110641ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 16591757777010270123ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -1870740686;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned char)244;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
