#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8484150142178787266ULL;
unsigned int var_6 = 1364209689U;
unsigned short var_12 = (unsigned short)62494;
unsigned long long int var_13 = 7084539812451277152ULL;
int zero = 0;
short var_15 = (short)16161;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)241;
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
