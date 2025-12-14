#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -91611045;
unsigned int var_3 = 1880000736U;
int var_7 = -1309480094;
int var_8 = -1477998716;
int var_10 = -1216994691;
int zero = 0;
unsigned int var_11 = 1671658567U;
unsigned int var_12 = 3897049785U;
int var_13 = -1026981693;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
