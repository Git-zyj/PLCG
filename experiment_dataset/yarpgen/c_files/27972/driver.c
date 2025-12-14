#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60198;
unsigned int var_2 = 2703277738U;
long long int var_3 = 6109575371353241909LL;
unsigned short var_4 = (unsigned short)36578;
short var_5 = (short)10346;
unsigned int var_7 = 3077513855U;
unsigned long long int var_8 = 12148851235023162100ULL;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
unsigned short var_11 = (unsigned short)16514;
unsigned char var_12 = (unsigned char)146;
unsigned char var_13 = (unsigned char)213;
unsigned short var_14 = (unsigned short)14850;
short var_15 = (short)18456;
unsigned short var_16 = (unsigned short)52016;
unsigned short var_17 = (unsigned short)36558;
unsigned char var_18 = (unsigned char)247;
unsigned char var_19 = (unsigned char)144;
unsigned long long int var_20 = 6500430951781394820ULL;
unsigned short var_21 = (unsigned short)39507;
unsigned short var_22 = (unsigned short)61673;
long long int var_23 = 8817743110899066523LL;
short var_24 = (short)-8626;
unsigned short var_25 = (unsigned short)23298;
short arr_0 [11] ;
short arr_1 [11] [11] ;
short arr_2 [11] ;
unsigned short arr_4 [12] ;
short arr_8 [16] [16] ;
long long int arr_9 [16] [16] ;
short arr_10 [16] ;
short arr_11 [16] [16] ;
short arr_13 [16] [16] ;
short arr_6 [12] ;
short arr_7 [12] ;
long long int arr_15 [16] [16] ;
unsigned long long int arr_16 [16] ;
_Bool arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-19780;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)27434;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)9429;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)56395;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (short)10831;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 7846664509534080357LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)-15928;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-11127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (short)7990;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)-468;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)12706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 9000278371692363451LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 6207746699456116892ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
