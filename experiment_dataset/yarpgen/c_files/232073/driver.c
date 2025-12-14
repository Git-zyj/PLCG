#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
short var_1 = (short)-31747;
long long int var_2 = -4216110880690865420LL;
short var_10 = (short)2097;
int zero = 0;
unsigned short var_11 = (unsigned short)16675;
unsigned short var_12 = (unsigned short)1570;
unsigned int var_13 = 1452201734U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
