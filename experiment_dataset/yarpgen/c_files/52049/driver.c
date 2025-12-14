#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)113;
unsigned short var_6 = (unsigned short)37611;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 375729007U;
short var_11 = (short)-10247;
int var_13 = 1880523926;
int zero = 0;
unsigned long long int var_16 = 7684109907115751942ULL;
unsigned char var_17 = (unsigned char)133;
unsigned int var_18 = 4291211497U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
