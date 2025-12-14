#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned short var_1 = (unsigned short)58885;
short var_2 = (short)30827;
short var_5 = (short)-31871;
int var_8 = 1310942065;
unsigned long long int var_11 = 2943342711266451396ULL;
int zero = 0;
unsigned long long int var_12 = 16093268386830504307ULL;
int var_13 = -1401853839;
short var_14 = (short)-5602;
signed char var_15 = (signed char)-50;
unsigned int var_16 = 2132235250U;
int var_17 = -261977378;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
int arr_2 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1399504486;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8889286418459143829ULL : 1712619348293586837ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
