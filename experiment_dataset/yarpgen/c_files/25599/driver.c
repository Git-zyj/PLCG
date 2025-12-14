#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2542429112930400461ULL;
int var_1 = -793731098;
unsigned char var_5 = (unsigned char)206;
int zero = 0;
unsigned short var_10 = (unsigned short)45603;
short var_11 = (short)-875;
unsigned int var_12 = 424024892U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
