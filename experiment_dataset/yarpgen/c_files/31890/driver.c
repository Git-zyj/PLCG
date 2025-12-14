#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18603;
long long int var_12 = -7691115690366562377LL;
unsigned int var_13 = 3768129956U;
int zero = 0;
short var_14 = (short)-14016;
unsigned char var_15 = (unsigned char)249;
signed char var_16 = (signed char)29;
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
