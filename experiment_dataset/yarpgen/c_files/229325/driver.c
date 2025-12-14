#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6000936428982156002LL;
unsigned short var_8 = (unsigned short)19824;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 4068309356U;
unsigned short var_17 = (unsigned short)6882;
void init() {
}

void checksum() {
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
