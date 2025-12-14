#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1591579957;
int var_6 = 1183147256;
unsigned int var_7 = 3410053934U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-12052;
int zero = 0;
long long int var_16 = 2750325275615135816LL;
signed char var_17 = (signed char)-96;
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
