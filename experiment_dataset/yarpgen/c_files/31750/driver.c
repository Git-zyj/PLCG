#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18428;
signed char var_5 = (signed char)126;
unsigned short var_6 = (unsigned short)14838;
unsigned int var_13 = 4058281231U;
int zero = 0;
unsigned int var_15 = 1070438931U;
unsigned int var_16 = 1846324640U;
int var_17 = -561898310;
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
