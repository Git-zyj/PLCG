#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7617010926037753484LL;
unsigned int var_6 = 1815359229U;
unsigned char var_7 = (unsigned char)248;
signed char var_15 = (signed char)-126;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
unsigned int var_20 = 2333309682U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
