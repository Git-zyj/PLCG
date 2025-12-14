#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29352;
unsigned char var_8 = (unsigned char)86;
int zero = 0;
unsigned long long int var_16 = 4690496097149408739ULL;
unsigned short var_17 = (unsigned short)3228;
unsigned int var_18 = 2763544280U;
void init() {
}

void checksum() {
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
