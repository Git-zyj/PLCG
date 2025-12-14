#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
unsigned long long int var_3 = 16952551089203845088ULL;
short var_5 = (short)-16923;
unsigned short var_9 = (unsigned short)2214;
unsigned short var_12 = (unsigned short)29049;
int zero = 0;
signed char var_14 = (signed char)63;
unsigned int var_15 = 297860367U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-10626;
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
