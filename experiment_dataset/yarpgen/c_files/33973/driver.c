#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27726;
long long int var_14 = 6845099227547862102LL;
unsigned int var_17 = 3345292242U;
int zero = 0;
long long int var_20 = -4565062410316548924LL;
int var_21 = -768214696;
signed char var_22 = (signed char)73;
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
