#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20386;
short var_8 = (short)-8861;
unsigned short var_13 = (unsigned short)5661;
int zero = 0;
unsigned short var_14 = (unsigned short)23111;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8362962718698402406LL;
void init() {
}

void checksum() {
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
