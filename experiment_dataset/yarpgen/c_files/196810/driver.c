#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14356;
long long int var_1 = 6175972698974819938LL;
long long int var_2 = 6404856829241908178LL;
int var_4 = -2081233514;
unsigned long long int var_7 = 8391380109458790479ULL;
signed char var_11 = (signed char)11;
unsigned char var_13 = (unsigned char)170;
long long int var_15 = 8195747053580882634LL;
short var_16 = (short)23950;
unsigned char var_18 = (unsigned char)71;
unsigned long long int var_19 = 16865722832653784656ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8324990428306880483LL;
unsigned long long int var_22 = 1623244695121568104ULL;
short var_23 = (short)-11605;
int var_24 = 808904462;
_Bool var_25 = (_Bool)0;
long long int var_26 = -6994174489830842708LL;
int arr_1 [23] ;
int arr_4 [23] [23] ;
unsigned char arr_5 [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
long long int arr_9 [23] ;
unsigned char arr_13 [23] ;
unsigned char arr_8 [23] [23] [23] ;
long long int arr_17 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1987870409;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -1996002721;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -4946477033739569870LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)154 : (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = -3841474704029192571LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
