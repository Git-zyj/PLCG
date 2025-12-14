#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1210898018;
short var_5 = (short)24651;
unsigned short var_10 = (unsigned short)43374;
short var_12 = (short)-29008;
int zero = 0;
unsigned int var_16 = 2379725431U;
unsigned int var_17 = 976811726U;
unsigned short var_18 = (unsigned short)64434;
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
