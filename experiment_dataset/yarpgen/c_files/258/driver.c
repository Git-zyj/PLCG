#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -46747784;
unsigned int var_5 = 1130262921U;
unsigned short var_14 = (unsigned short)18678;
short var_15 = (short)4651;
int zero = 0;
unsigned short var_17 = (unsigned short)62907;
short var_18 = (short)-13705;
void init() {
}

void checksum() {
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
