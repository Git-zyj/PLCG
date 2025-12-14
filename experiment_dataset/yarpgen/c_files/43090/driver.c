#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23886;
short var_6 = (short)-32247;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 13157405815735113920ULL;
int zero = 0;
int var_17 = 1002575241;
short var_18 = (short)4847;
unsigned char var_19 = (unsigned char)146;
void init() {
}

void checksum() {
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
