#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27562;
unsigned short var_6 = (unsigned short)42925;
int var_8 = 1041545463;
unsigned long long int var_10 = 13324461633592576517ULL;
int var_12 = -1744607085;
int zero = 0;
int var_13 = 1956669931;
unsigned int var_14 = 3644259159U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)19101;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
