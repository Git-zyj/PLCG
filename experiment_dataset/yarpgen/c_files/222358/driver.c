#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -285130325;
unsigned int var_2 = 2076997393U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3221379810U;
long long int var_8 = 1996238709042615341LL;
int var_10 = 638262990;
unsigned short var_12 = (unsigned short)34894;
int zero = 0;
signed char var_13 = (signed char)-62;
unsigned char var_14 = (unsigned char)232;
unsigned char var_15 = (unsigned char)206;
int var_16 = -392415727;
void init() {
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
