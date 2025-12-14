#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17705;
unsigned int var_3 = 4112378632U;
unsigned short var_9 = (unsigned short)58220;
int zero = 0;
unsigned int var_15 = 217625883U;
unsigned char var_16 = (unsigned char)88;
long long int var_17 = 5075332142321838674LL;
void init() {
}

void checksum() {
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
