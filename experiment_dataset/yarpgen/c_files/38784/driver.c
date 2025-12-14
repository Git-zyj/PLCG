#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16953556740855940744ULL;
unsigned long long int var_4 = 5052214846097532953ULL;
unsigned char var_5 = (unsigned char)171;
unsigned long long int var_7 = 13759630275402617163ULL;
unsigned long long int var_8 = 6886620206665135646ULL;
unsigned short var_12 = (unsigned short)57985;
short var_13 = (short)1817;
int zero = 0;
unsigned short var_14 = (unsigned short)59455;
short var_15 = (short)1147;
unsigned int var_16 = 3894307041U;
short var_17 = (short)9054;
unsigned char var_18 = (unsigned char)20;
unsigned long long int var_19 = 9162118358968986070ULL;
unsigned long long int var_20 = 7215466489910553836ULL;
unsigned short var_21 = (unsigned short)38364;
unsigned int var_22 = 2421756552U;
unsigned long long int arr_14 [12] ;
unsigned int arr_19 [12] ;
unsigned long long int arr_20 [12] [12] [12] [12] ;
short arr_2 [11] ;
unsigned short arr_15 [12] ;
unsigned long long int arr_21 [12] [12] [12] ;
unsigned short arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 5805902614324498733ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 1070974501U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 7514311098171429973ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-21230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned short)63963;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 6803336689300290178ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned short)53444;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
