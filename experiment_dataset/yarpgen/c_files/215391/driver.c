#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1088889907;
short var_3 = (short)9438;
unsigned char var_14 = (unsigned char)171;
unsigned int var_16 = 1675534101U;
int zero = 0;
short var_18 = (short)-18673;
unsigned int var_19 = 1569644281U;
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
