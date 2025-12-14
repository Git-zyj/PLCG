#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1997126933U;
short var_2 = (short)10187;
long long int var_4 = 5576009452769102291LL;
unsigned int var_5 = 3295514017U;
short var_7 = (short)2054;
int zero = 0;
int var_10 = -910124231;
unsigned int var_11 = 4130287023U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
