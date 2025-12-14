#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)17635;
signed char var_10 = (signed char)33;
unsigned long long int var_13 = 8009335801371078629ULL;
int var_14 = 1582425125;
int zero = 0;
unsigned int var_16 = 1573964231U;
int var_17 = -668680848;
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
