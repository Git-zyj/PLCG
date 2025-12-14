#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8264619659326798212LL;
unsigned short var_2 = (unsigned short)39937;
unsigned int var_10 = 1407998458U;
int zero = 0;
signed char var_12 = (signed char)55;
unsigned int var_13 = 3084811604U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
