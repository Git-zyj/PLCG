#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58581;
unsigned int var_5 = 49632064U;
unsigned int var_7 = 2393832047U;
unsigned int var_14 = 1783945556U;
int zero = 0;
unsigned short var_16 = (unsigned short)15045;
signed char var_17 = (signed char)42;
unsigned int var_18 = 646814480U;
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
