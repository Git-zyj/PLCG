#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 469212791U;
unsigned short var_4 = (unsigned short)19961;
unsigned int var_14 = 4270930321U;
int zero = 0;
unsigned short var_15 = (unsigned short)29253;
unsigned int var_16 = 762974839U;
void init() {
}

void checksum() {
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
