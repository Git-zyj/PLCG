#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)231;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-22032;
int var_15 = 265329802;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1522315312U;
unsigned char var_18 = (unsigned char)119;
unsigned short var_19 = (unsigned short)30405;
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
