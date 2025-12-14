#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned long long int var_1 = 16421703103713648907ULL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-109;
unsigned short var_7 = (unsigned short)12874;
int zero = 0;
unsigned long long int var_10 = 14795456986546177612ULL;
unsigned short var_11 = (unsigned short)23963;
unsigned char var_12 = (unsigned char)80;
unsigned char var_13 = (unsigned char)155;
int var_14 = 1388084403;
signed char var_15 = (signed char)81;
unsigned long long int var_16 = 4889179313370565854ULL;
long long int var_17 = -5142454604703140643LL;
int var_18 = 47924436;
short var_19 = (short)4364;
signed char var_20 = (signed char)109;
int var_21 = -1906194032;
_Bool var_22 = (_Bool)0;
unsigned short arr_1 [21] ;
unsigned short arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
int arr_4 [21] ;
_Bool arr_5 [21] ;
short arr_7 [16] ;
unsigned char arr_8 [16] ;
unsigned int arr_11 [16] [16] ;
signed char arr_13 [16] [16] ;
int arr_15 [16] ;
_Bool arr_21 [16] [16] [16] [16] ;
short arr_22 [16] ;
short arr_6 [21] ;
unsigned char arr_10 [16] ;
_Bool arr_26 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)37478;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23789;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)58194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 599135640;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)-3958;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 1999261625U : 2575948987U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)101 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = -1106078384;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (short)-18233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-28763;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
