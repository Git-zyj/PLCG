#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21761;
long long int var_6 = -778315304934372835LL;
unsigned short var_8 = (unsigned short)60812;
unsigned int var_9 = 3793868729U;
unsigned short var_11 = (unsigned short)2184;
int zero = 0;
unsigned short var_12 = (unsigned short)3329;
unsigned int var_13 = 140852564U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)57550;
unsigned char var_17 = (unsigned char)238;
unsigned short arr_0 [16] ;
int arr_2 [16] ;
unsigned short arr_3 [16] [16] [16] ;
unsigned char arr_4 [16] [16] ;
long long int arr_6 [16] ;
short arr_12 [13] ;
short arr_14 [13] ;
long long int arr_7 [16] ;
unsigned short arr_8 [16] [16] ;
unsigned int arr_9 [16] [16] [16] ;
unsigned short arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)42762;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1388367530;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)48646 : (unsigned short)55444;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -7267781061537013505LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (short)-2935;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (short)13489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -344065545539114933LL : -5528408428987032140LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)55858 : (unsigned short)18099;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3805388993U : 4030937778U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned short)42076;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
