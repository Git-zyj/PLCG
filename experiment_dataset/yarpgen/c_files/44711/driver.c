#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)13041;
short var_10 = (short)9638;
int var_11 = -2101792199;
short var_12 = (short)27595;
short var_13 = (short)2158;
unsigned short var_14 = (unsigned short)6315;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)49182;
long long int var_18 = 1137417444305335052LL;
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
