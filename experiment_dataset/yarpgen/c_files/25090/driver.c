#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14702821998387092144ULL;
unsigned short var_6 = (unsigned short)34903;
long long int var_8 = -3400328223171291772LL;
int zero = 0;
signed char var_13 = (signed char)41;
int var_14 = -524900012;
long long int var_15 = 6564579073778200274LL;
unsigned long long int var_16 = 1986183198701049223ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
