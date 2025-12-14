#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2715244560U;
unsigned long long int var_4 = 18067354643029340324ULL;
unsigned short var_6 = (unsigned short)7710;
unsigned int var_7 = 449416367U;
unsigned long long int var_8 = 16350149112557149154ULL;
int var_9 = -388020406;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)210;
unsigned char var_13 = (unsigned char)79;
short var_14 = (short)26830;
signed char var_15 = (signed char)104;
unsigned long long int var_16 = 15759664674058172197ULL;
unsigned char var_17 = (unsigned char)235;
unsigned char var_18 = (unsigned char)37;
int var_19 = 620392162;
int var_20 = -1570766211;
_Bool arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 555503149U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
