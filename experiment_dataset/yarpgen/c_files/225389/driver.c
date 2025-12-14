#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1641;
long long int var_6 = 7997316402046123872LL;
short var_11 = (short)456;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
unsigned short var_15 = (unsigned short)10006;
unsigned int var_16 = 2986474708U;
void init() {
}

void checksum() {
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
