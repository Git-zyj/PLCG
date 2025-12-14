#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11654;
short var_3 = (short)-7447;
signed char var_7 = (signed char)120;
short var_8 = (short)-19080;
int zero = 0;
unsigned short var_16 = (unsigned short)45041;
int var_17 = -38200592;
void init() {
}

void checksum() {
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
