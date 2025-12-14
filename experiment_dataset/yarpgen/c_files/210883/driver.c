#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
signed char var_5 = (signed char)51;
unsigned long long int var_7 = 3728134133123872500ULL;
signed char var_10 = (signed char)35;
unsigned short var_12 = (unsigned short)26557;
long long int var_16 = -9084655812344272093LL;
unsigned short var_17 = (unsigned short)54077;
int zero = 0;
unsigned int var_18 = 3053940078U;
unsigned int var_19 = 1394127160U;
short var_20 = (short)7744;
void init() {
}

void checksum() {
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
