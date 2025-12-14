#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10843338475153857303ULL;
unsigned short var_2 = (unsigned short)14798;
int var_5 = -1029315569;
unsigned char var_7 = (unsigned char)150;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-25500;
signed char var_11 = (signed char)32;
int var_12 = 1772546503;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)18003;
int zero = 0;
unsigned short var_15 = (unsigned short)21201;
unsigned char var_16 = (unsigned char)219;
int var_17 = -676838840;
_Bool var_18 = (_Bool)1;
unsigned int arr_1 [18] ;
unsigned long long int arr_3 [18] ;
unsigned char arr_6 [18] [18] ;
unsigned short arr_7 [18] ;
_Bool arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3067853944U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 16682999666653263776ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)7564;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
