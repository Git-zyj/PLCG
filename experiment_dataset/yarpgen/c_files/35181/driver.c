#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2580843335U;
unsigned int var_2 = 1937314398U;
unsigned short var_3 = (unsigned short)43335;
int var_6 = -1868311726;
unsigned short var_7 = (unsigned short)20958;
short var_9 = (short)-13684;
unsigned long long int var_13 = 16165318279653517320ULL;
int zero = 0;
unsigned long long int var_20 = 16142497653304637980ULL;
unsigned long long int var_21 = 188018131414978393ULL;
unsigned long long int var_22 = 2882627185779669203ULL;
unsigned short var_23 = (unsigned short)58360;
int var_24 = 612137064;
int var_25 = 1784020455;
short arr_0 [11] ;
unsigned int arr_6 [19] ;
unsigned short arr_8 [19] ;
unsigned int arr_9 [19] [19] ;
unsigned int arr_13 [25] ;
short arr_4 [11] ;
int arr_5 [11] [11] ;
unsigned int arr_10 [19] [19] ;
unsigned short arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)32526;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 3618638259U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)23856;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 1400755665U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3982339681U : 3654370200U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)591;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -1614726657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 2126881262U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22514 : (unsigned short)46395;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
