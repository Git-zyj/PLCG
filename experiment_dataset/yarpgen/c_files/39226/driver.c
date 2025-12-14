#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2001376350;
unsigned short var_1 = (unsigned short)17890;
unsigned short var_5 = (unsigned short)4792;
unsigned char var_9 = (unsigned char)129;
long long int var_11 = 2399998485108746070LL;
unsigned char var_14 = (unsigned char)172;
int zero = 0;
unsigned long long int var_15 = 8393257540870372610ULL;
int var_16 = -822209145;
unsigned char var_17 = (unsigned char)248;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
