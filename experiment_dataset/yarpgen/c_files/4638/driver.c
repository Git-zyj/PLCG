#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25962;
unsigned long long int var_1 = 8249004025264290915ULL;
unsigned long long int var_2 = 15186032060515349888ULL;
unsigned long long int var_3 = 8885654055093541232ULL;
unsigned long long int var_5 = 15960780038198547145ULL;
signed char var_6 = (signed char)67;
long long int var_7 = -7382195971553941723LL;
unsigned char var_8 = (unsigned char)55;
unsigned char var_9 = (unsigned char)234;
unsigned char var_10 = (unsigned char)113;
unsigned char var_12 = (unsigned char)165;
int zero = 0;
unsigned int var_13 = 3029683768U;
int var_14 = 1882901637;
unsigned int var_15 = 3615074515U;
unsigned int var_16 = 4281841786U;
unsigned char var_17 = (unsigned char)6;
int var_18 = 1821535839;
unsigned char arr_0 [23] ;
short arr_1 [23] ;
unsigned int arr_4 [23] [23] ;
short arr_6 [23] [23] [23] ;
int arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)25051 : (short)-16575;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 467896037U : 4004173864U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-3728;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -22527802 : 1427619184;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
