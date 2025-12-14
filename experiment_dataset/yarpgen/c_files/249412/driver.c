#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2468511077U;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)13;
int zero = 0;
short var_20 = (short)20309;
unsigned long long int var_21 = 11752588643100074289ULL;
short var_22 = (short)-32091;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
