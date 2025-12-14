#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)26298;
unsigned int var_12 = 3485333141U;
int zero = 0;
unsigned char var_14 = (unsigned char)35;
signed char var_15 = (signed char)81;
unsigned short var_16 = (unsigned short)40095;
int var_17 = 1101039496;
signed char var_18 = (signed char)-97;
unsigned long long int var_19 = 8708965341527777329ULL;
int var_20 = 1779690601;
long long int var_21 = -6642470482062621013LL;
unsigned char var_22 = (unsigned char)204;
unsigned long long int var_23 = 15617168082285413678ULL;
signed char arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_2 [13] [13] ;
signed char arr_4 [13] [13] [13] [13] ;
long long int arr_8 [11] ;
_Bool arr_13 [15] ;
_Bool arr_18 [17] ;
signed char arr_7 [13] [13] ;
signed char arr_10 [11] [11] ;
signed char arr_11 [11] ;
int arr_16 [15] ;
long long int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 13609685698603610858ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 2714098281794791257LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-98 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)-70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -1086322222;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = -5947413660017817652LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
