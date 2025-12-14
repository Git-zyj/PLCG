#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6704728919406208115ULL;
long long int var_8 = 1129899140669527017LL;
unsigned int var_12 = 1428880441U;
int zero = 0;
long long int var_16 = -4824077142200609349LL;
unsigned int var_17 = 1899795598U;
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
