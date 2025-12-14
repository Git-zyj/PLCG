#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1778351731;
short var_5 = (short)3266;
signed char var_7 = (signed char)116;
unsigned short var_8 = (unsigned short)26706;
int zero = 0;
int var_13 = 749217906;
unsigned short var_14 = (unsigned short)32706;
signed char var_15 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
