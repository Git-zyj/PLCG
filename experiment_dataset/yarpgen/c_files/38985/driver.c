#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11002784753132341270ULL;
unsigned long long int var_5 = 17896688824517636132ULL;
unsigned short var_7 = (unsigned short)15547;
unsigned char var_11 = (unsigned char)63;
unsigned int var_12 = 1732680747U;
int zero = 0;
unsigned char var_13 = (unsigned char)125;
unsigned char var_14 = (unsigned char)206;
unsigned short var_15 = (unsigned short)37320;
int var_16 = 1081943764;
unsigned char arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
