#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23659;
short var_3 = (short)-28013;
signed char var_7 = (signed char)16;
signed char var_13 = (signed char)-11;
int zero = 0;
int var_20 = -1510754395;
signed char var_21 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
