#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15334;
int var_2 = -327180509;
short var_3 = (short)22064;
unsigned int var_6 = 1439184164U;
short var_16 = (short)2923;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
long long int var_19 = 679246908786523891LL;
void init() {
}

void checksum() {
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
