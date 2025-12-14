#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned short var_1 = (unsigned short)27929;
unsigned int var_2 = 2527758495U;
unsigned short var_3 = (unsigned short)7884;
unsigned char var_4 = (unsigned char)18;
signed char var_5 = (signed char)30;
unsigned char var_6 = (unsigned char)120;
int var_7 = 815881539;
long long int var_8 = -2467725138961281705LL;
unsigned char var_9 = (unsigned char)26;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)60741;
unsigned long long int var_13 = 9761078148984747096ULL;
unsigned char var_14 = (unsigned char)204;
unsigned char var_15 = (unsigned char)253;
signed char var_16 = (signed char)122;
unsigned short var_17 = (unsigned short)41301;
unsigned short var_18 = (unsigned short)18451;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)54046;
unsigned int var_21 = 1891917802U;
signed char var_22 = (signed char)-23;
short arr_1 [13] ;
unsigned char arr_2 [13] ;
signed char arr_3 [15] [15] ;
short arr_4 [15] ;
unsigned long long int arr_5 [15] ;
long long int arr_6 [15] [15] [15] ;
short arr_7 [15] ;
_Bool arr_9 [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] [15] ;
unsigned char arr_11 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_14 [15] [15] [15] [15] [15] ;
int arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_16 [15] ;
int arr_13 [15] [15] [15] ;
unsigned long long int arr_19 [12] ;
unsigned long long int arr_22 [12] [12] [12] ;
unsigned long long int arr_23 [12] [12] ;
unsigned short arr_28 [12] [12] ;
signed char arr_29 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-13546;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-24436;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 3711419837556982323ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -8339782131245576481LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-30944;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)16101 : (unsigned short)46713;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2087870538;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 1627697659U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1793104035 : -1875452206;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 12921452504855029823ULL : 11529555253474091826ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 606649922668753041ULL : 9466572196919858441ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 10329737587819026086ULL : 1338669490210295158ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36488 : (unsigned short)27818;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)-78;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
