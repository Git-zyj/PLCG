#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-99;
unsigned short var_3 = (unsigned short)53813;
long long int var_6 = -9202336075033651667LL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)53097;
int zero = 0;
unsigned int var_16 = 2825611681U;
_Bool var_17 = (_Bool)1;
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
