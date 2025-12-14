#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1974803512;
short var_7 = (short)10446;
short var_14 = (short)27679;
short var_16 = (short)25870;
int zero = 0;
int var_20 = 1363568507;
signed char var_21 = (signed char)96;
signed char var_22 = (signed char)122;
signed char var_23 = (signed char)-86;
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
