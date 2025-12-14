#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2147769058U;
unsigned short var_4 = (unsigned short)45446;
int zero = 0;
unsigned int var_14 = 402551148U;
unsigned char var_15 = (unsigned char)195;
short var_16 = (short)-19478;
short var_17 = (short)27541;
short var_18 = (short)-14731;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
