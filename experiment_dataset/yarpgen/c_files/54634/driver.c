#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -656497589;
unsigned int var_4 = 944327368U;
unsigned long long int var_12 = 13361623332240666390ULL;
short var_17 = (short)16215;
int zero = 0;
int var_18 = 1875663642;
signed char var_19 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
