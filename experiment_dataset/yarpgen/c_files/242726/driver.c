#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3455829721931514871LL;
long long int var_1 = 5744607706124507631LL;
unsigned short var_2 = (unsigned short)23710;
int var_4 = -1921544433;
long long int var_5 = -8156135918735557691LL;
long long int var_6 = -820078566530915463LL;
unsigned char var_7 = (unsigned char)236;
signed char var_8 = (signed char)43;
unsigned char var_9 = (unsigned char)206;
int var_10 = 793204725;
unsigned int var_11 = 296498800U;
long long int var_12 = -7291694882343974842LL;
int var_13 = 2023536577;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)26119;
int zero = 0;
signed char var_18 = (signed char)-22;
unsigned short var_19 = (unsigned short)22479;
short var_20 = (short)25653;
signed char var_21 = (signed char)-13;
unsigned int var_22 = 3422721335U;
int var_23 = 764534646;
long long int var_24 = 1901213672090150601LL;
long long int var_25 = 6018712794480231091LL;
unsigned char arr_0 [19] ;
int arr_1 [19] ;
unsigned long long int arr_3 [16] ;
unsigned short arr_5 [18] [18] ;
unsigned char arr_6 [18] ;
signed char arr_2 [19] ;
_Bool arr_7 [18] ;
unsigned char arr_8 [18] ;
_Bool arr_9 [18] [18] ;
_Bool arr_14 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2090838558;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 17223012270122947803ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)13404;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)164 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
