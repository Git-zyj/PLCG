#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18001;
int var_1 = 215778179;
int var_2 = 1847097746;
unsigned long long int var_4 = 2010791374160197902ULL;
int var_5 = -1562945051;
unsigned short var_6 = (unsigned short)45521;
unsigned short var_7 = (unsigned short)41889;
short var_8 = (short)-9709;
unsigned short var_14 = (unsigned short)37431;
int var_16 = -1706945213;
int zero = 0;
unsigned int var_18 = 1660349587U;
unsigned int var_19 = 3639188783U;
short var_20 = (short)16594;
short var_21 = (short)-12261;
unsigned int var_22 = 4018427114U;
int var_23 = 115458392;
int var_24 = -317817998;
int var_25 = 130069620;
int arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_12 [19] [19] [19] ;
unsigned long long int arr_3 [25] ;
short arr_4 [25] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -1569437213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32265;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 210380717067491469ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 9966177423288570602ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 581960787895135501ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)20995;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 1363655148U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
