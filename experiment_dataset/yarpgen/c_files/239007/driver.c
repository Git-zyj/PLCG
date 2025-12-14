#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 5111857581676568153ULL;
int zero = 0;
unsigned int var_11 = 364631517U;
unsigned int var_12 = 916322589U;
unsigned short var_13 = (unsigned short)29624;
unsigned long long int var_14 = 1957280535627443066ULL;
long long int var_15 = -1915914949907724886LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
