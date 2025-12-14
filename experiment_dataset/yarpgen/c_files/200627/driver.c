#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)1100;
signed char var_7 = (signed char)-108;
unsigned long long int var_16 = 11547657896370347152ULL;
int zero = 0;
int var_20 = -1377425498;
unsigned short var_21 = (unsigned short)4347;
unsigned short var_22 = (unsigned short)17214;
void init() {
}

void checksum() {
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
