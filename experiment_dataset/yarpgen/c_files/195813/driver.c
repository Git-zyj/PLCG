#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -605649664;
short var_13 = (short)-11097;
short var_14 = (short)21272;
int zero = 0;
signed char var_15 = (signed char)51;
unsigned int var_16 = 2893416966U;
unsigned int var_17 = 340394099U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
