#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1693134362;
unsigned int var_3 = 3980422854U;
unsigned long long int var_8 = 8684472707153485491ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)8238;
unsigned int var_16 = 283879014U;
unsigned char var_17 = (unsigned char)173;
unsigned int var_18 = 1354942610U;
short var_19 = (short)-19768;
unsigned long long int var_20 = 7686798410722936570ULL;
unsigned short var_21 = (unsigned short)41254;
long long int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -6610468266332492732LL : 3942344056677592490LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
