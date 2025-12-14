#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-19493;
int var_16 = -1818962683;
short var_19 = (short)11571;
int zero = 0;
short var_20 = (short)-6870;
unsigned short var_21 = (unsigned short)36874;
signed char var_22 = (signed char)-35;
int var_23 = 2067153574;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
