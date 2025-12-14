#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5350;
short var_7 = (short)13214;
signed char var_8 = (signed char)-69;
signed char var_9 = (signed char)-15;
int zero = 0;
unsigned int var_13 = 259806841U;
short var_14 = (short)-531;
unsigned short var_15 = (unsigned short)24242;
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
