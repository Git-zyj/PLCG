#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3695035806U;
signed char var_8 = (signed char)23;
int var_11 = -1554675417;
short var_12 = (short)-14154;
unsigned int var_14 = 1555451403U;
int zero = 0;
unsigned int var_16 = 3806191064U;
short var_17 = (short)-9956;
void init() {
}

void checksum() {
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
