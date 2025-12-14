#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
long long int var_2 = 9100376246979993630LL;
long long int var_3 = 4310996659315456400LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-20390;
unsigned char var_7 = (unsigned char)42;
long long int var_8 = -7328787922958555638LL;
signed char var_9 = (signed char)92;
unsigned int var_11 = 3135377154U;
unsigned int var_14 = 1853124459U;
int zero = 0;
long long int var_15 = 5995494354941968291LL;
unsigned char var_16 = (unsigned char)103;
long long int var_17 = 1861970598138172505LL;
short var_18 = (short)-27985;
int var_19 = -291525900;
long long int var_20 = 8116188130159736801LL;
long long int var_21 = -1821327204430212145LL;
signed char var_22 = (signed char)-56;
int var_23 = -772289974;
unsigned short var_24 = (unsigned short)4531;
unsigned long long int var_25 = 17958489758444019076ULL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-14310;
unsigned short var_28 = (unsigned short)7628;
unsigned int var_29 = 3891447068U;
short var_30 = (short)-21930;
signed char var_31 = (signed char)45;
unsigned long long int var_32 = 5772241177750303496ULL;
signed char arr_0 [11] ;
unsigned int arr_1 [11] ;
signed char arr_2 [11] [11] ;
signed char arr_5 [10] ;
long long int arr_7 [10] [10] ;
int arr_11 [10] ;
short arr_14 [10] ;
long long int arr_15 [10] [10] ;
short arr_17 [24] ;
int arr_20 [24] [24] ;
unsigned char arr_22 [10] [10] ;
_Bool arr_3 [11] [11] ;
signed char arr_10 [10] [10] ;
short arr_26 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1837735430U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -6800894749564272851LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -1419688805;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (short)2965;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 4089158278356439834LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (short)16497;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = -1433892713;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (short)-18080;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
