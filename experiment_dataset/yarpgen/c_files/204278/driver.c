#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1469009360886248135ULL;
long long int var_3 = -1680183232677569787LL;
short var_12 = (short)3118;
int zero = 0;
short var_17 = (short)-29074;
unsigned short var_18 = (unsigned short)62328;
_Bool var_19 = (_Bool)1;
long long int var_20 = -9214885693077294640LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
