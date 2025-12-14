#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6951;
unsigned char var_10 = (unsigned char)15;
long long int var_11 = -2952978225182706291LL;
unsigned char var_16 = (unsigned char)33;
short var_17 = (short)-7864;
unsigned int var_18 = 1358724358U;
int zero = 0;
long long int var_20 = 8151406237662815903LL;
long long int var_21 = -3299353649298704720LL;
unsigned int var_22 = 783837418U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
