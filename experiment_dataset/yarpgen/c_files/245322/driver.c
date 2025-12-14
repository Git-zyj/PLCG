#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
short var_7 = (short)908;
int var_11 = -2093118349;
unsigned int var_14 = 185646471U;
int zero = 0;
int var_15 = -1195682320;
signed char var_16 = (signed char)-104;
short var_17 = (short)-32052;
void init() {
}

void checksum() {
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
