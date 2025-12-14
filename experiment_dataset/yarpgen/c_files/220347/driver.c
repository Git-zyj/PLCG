#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10021;
short var_1 = (short)-6460;
unsigned int var_3 = 3151605518U;
unsigned long long int var_12 = 2077028473782529696ULL;
int zero = 0;
short var_14 = (short)17570;
unsigned int var_15 = 2927538295U;
void init() {
}

void checksum() {
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
