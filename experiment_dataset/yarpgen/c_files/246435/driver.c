#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9523370397747001499ULL;
unsigned int var_4 = 1650977450U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 2132938726U;
int zero = 0;
unsigned int var_14 = 588736700U;
unsigned int var_15 = 3999557467U;
short var_16 = (short)10209;
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
