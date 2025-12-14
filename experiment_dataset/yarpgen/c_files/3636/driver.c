#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14289;
_Bool var_3 = (_Bool)1;
short var_6 = (short)26315;
unsigned int var_7 = 3354093969U;
unsigned int var_12 = 3515941696U;
short var_13 = (short)22425;
int zero = 0;
unsigned int var_14 = 2106227307U;
unsigned int var_15 = 3477691349U;
long long int var_16 = 5973470813047447990LL;
unsigned int var_17 = 1598697059U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
