#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3937422224U;
short var_9 = (short)28908;
signed char var_11 = (signed char)43;
short var_17 = (short)-17891;
unsigned int var_18 = 1144748873U;
int zero = 0;
short var_19 = (short)1238;
int var_20 = 1124986503;
short var_21 = (short)-17940;
short var_22 = (short)27097;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
