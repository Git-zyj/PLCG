#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23703;
short var_5 = (short)14895;
int var_6 = -1371106504;
unsigned long long int var_12 = 10514382293435176727ULL;
int zero = 0;
unsigned long long int var_17 = 16688656378103840582ULL;
short var_18 = (short)-25562;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
