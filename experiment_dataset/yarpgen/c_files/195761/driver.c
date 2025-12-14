#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2787346849U;
long long int var_1 = -3125611553915067906LL;
unsigned int var_3 = 2636071473U;
int var_4 = -1521081083;
long long int var_6 = 6038679541340327908LL;
int var_7 = 1009610910;
int zero = 0;
int var_11 = 1854340830;
int var_12 = 1617641225;
long long int var_13 = -7425710724322119642LL;
short var_14 = (short)-4063;
unsigned char var_15 = (unsigned char)32;
short arr_2 [18] [18] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)3378;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)59991;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
