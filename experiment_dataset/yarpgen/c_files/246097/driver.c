#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9922792847177845989ULL;
unsigned char var_8 = (unsigned char)158;
unsigned int var_10 = 2588932056U;
int zero = 0;
unsigned long long int var_13 = 4920664179123384736ULL;
short var_14 = (short)30097;
short var_15 = (short)-31782;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
