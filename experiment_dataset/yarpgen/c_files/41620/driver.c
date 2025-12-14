#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1222;
short var_5 = (short)-7747;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 12509952913701226152ULL;
int zero = 0;
int var_13 = 476905133;
unsigned int var_14 = 2221027774U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
