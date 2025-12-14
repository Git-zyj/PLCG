#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 520025652U;
int var_4 = 325108317;
long long int var_6 = -6511399164714557466LL;
short var_14 = (short)-19750;
int zero = 0;
signed char var_15 = (signed char)-114;
short var_16 = (short)-25166;
void init() {
}

void checksum() {
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
