#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4038109745U;
signed char var_8 = (signed char)-25;
signed char var_10 = (signed char)101;
int zero = 0;
signed char var_14 = (signed char)-80;
short var_15 = (short)24769;
unsigned int var_16 = 4012282438U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
