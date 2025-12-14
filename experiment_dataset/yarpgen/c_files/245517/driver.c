#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 305012497U;
signed char var_8 = (signed char)19;
short var_10 = (short)26119;
int zero = 0;
unsigned short var_14 = (unsigned short)40403;
unsigned char var_15 = (unsigned char)29;
unsigned long long int var_16 = 14825812014238031894ULL;
signed char var_17 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
