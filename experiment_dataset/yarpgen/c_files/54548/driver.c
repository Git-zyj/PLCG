#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6436;
unsigned char var_4 = (unsigned char)214;
long long int var_5 = -5786174002933546795LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 8121232490558769092LL;
int var_11 = -282349894;
signed char var_13 = (signed char)-88;
unsigned short var_14 = (unsigned short)52400;
int zero = 0;
unsigned short var_15 = (unsigned short)54106;
int var_16 = 1800713448;
unsigned char var_17 = (unsigned char)20;
unsigned long long int var_18 = 3171425668231760561ULL;
unsigned long long int var_19 = 10764023779773149922ULL;
unsigned long long int var_20 = 14193624855840046890ULL;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-30471;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
