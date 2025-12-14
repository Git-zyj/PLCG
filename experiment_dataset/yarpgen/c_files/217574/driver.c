#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2148909422U;
unsigned short var_6 = (unsigned short)21517;
unsigned short var_13 = (unsigned short)14517;
short var_16 = (short)-21923;
signed char var_17 = (signed char)63;
int zero = 0;
unsigned int var_18 = 381137781U;
long long int var_19 = 2684656263320055587LL;
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
