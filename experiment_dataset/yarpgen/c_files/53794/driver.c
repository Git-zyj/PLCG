#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2391947164U;
unsigned short var_2 = (unsigned short)8911;
int var_6 = -370863326;
short var_8 = (short)24961;
signed char var_11 = (signed char)-8;
int zero = 0;
int var_16 = -1540706072;
unsigned long long int var_17 = 10394453629769131869ULL;
unsigned int var_18 = 1976620614U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
