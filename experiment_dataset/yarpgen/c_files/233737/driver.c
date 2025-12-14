#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65398;
_Bool var_4 = (_Bool)0;
short var_9 = (short)2971;
signed char var_10 = (signed char)79;
unsigned int var_12 = 1488488213U;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-1475;
unsigned int var_17 = 1455753216U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
