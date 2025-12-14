#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1161313532U;
unsigned char var_8 = (unsigned char)174;
unsigned char var_12 = (unsigned char)148;
int zero = 0;
unsigned char var_14 = (unsigned char)104;
unsigned short var_15 = (unsigned short)17835;
unsigned int var_16 = 718558980U;
short var_17 = (short)-17049;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
