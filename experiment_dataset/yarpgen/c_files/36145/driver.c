#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12888772626550238458ULL;
int var_3 = -2074649192;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)244;
int zero = 0;
unsigned short var_17 = (unsigned short)24598;
int var_18 = -1623107379;
void init() {
}

void checksum() {
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
