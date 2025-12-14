#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14401;
unsigned char var_4 = (unsigned char)24;
long long int var_5 = 5012744803942433149LL;
unsigned int var_6 = 2598891779U;
unsigned int var_8 = 3139188839U;
signed char var_13 = (signed char)7;
unsigned long long int var_14 = 16173659155176469689ULL;
unsigned short var_16 = (unsigned short)30600;
unsigned short var_18 = (unsigned short)41318;
int zero = 0;
short var_19 = (short)17738;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 740179334U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
short arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned short arr_8 [10] ;
short arr_10 [10] [10] ;
unsigned int arr_11 [10] [10] ;
unsigned char arr_4 [25] ;
signed char arr_9 [10] ;
_Bool arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16726066541178552195ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)28808;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 5254492836728334172ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)3053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-7800;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 61276859U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
