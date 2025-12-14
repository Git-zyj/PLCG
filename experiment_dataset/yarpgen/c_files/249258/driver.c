#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32568;
unsigned int var_1 = 2781321325U;
unsigned int var_2 = 3819025337U;
unsigned char var_3 = (unsigned char)195;
unsigned long long int var_6 = 17220439064060424556ULL;
int zero = 0;
short var_14 = (short)27936;
short var_15 = (short)-14646;
unsigned int var_16 = 3190713011U;
void init() {
}

void checksum() {
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
