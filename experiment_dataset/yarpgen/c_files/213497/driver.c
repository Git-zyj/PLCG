#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1385325334U;
short var_2 = (short)-30989;
unsigned short var_7 = (unsigned short)11529;
int zero = 0;
unsigned short var_10 = (unsigned short)33246;
unsigned int var_11 = 4274155461U;
unsigned int var_12 = 1462127036U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
