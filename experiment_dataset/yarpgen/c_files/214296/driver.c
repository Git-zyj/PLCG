#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = -399086491;
unsigned int var_14 = 3888023437U;
unsigned int var_16 = 1375674921U;
signed char var_18 = (signed char)12;
int zero = 0;
short var_19 = (short)30723;
unsigned char var_20 = (unsigned char)77;
void init() {
}

void checksum() {
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
