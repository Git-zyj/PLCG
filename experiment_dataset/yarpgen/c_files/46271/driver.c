#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7138048828966254799ULL;
int var_3 = 1569193786;
unsigned long long int var_4 = 102907445085228274ULL;
long long int var_7 = -1515989682112794501LL;
long long int var_13 = 7917665436968738578LL;
long long int var_15 = -5033508832208224522LL;
int zero = 0;
int var_18 = 453082235;
long long int var_19 = -4558999605212080564LL;
short arr_1 [10] ;
unsigned char arr_5 [16] ;
unsigned int arr_4 [10] ;
unsigned int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)25930;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2043380548U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 364692398U : 2467873787U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 15053219960764138770ULL : 16413061322644592581ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
