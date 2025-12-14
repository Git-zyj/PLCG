#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
unsigned int var_1 = 3614293568U;
unsigned int var_3 = 1552445455U;
_Bool var_5 = (_Bool)0;
long long int var_7 = 267633783078875010LL;
short var_9 = (short)10716;
int zero = 0;
unsigned char var_11 = (unsigned char)230;
unsigned char var_12 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
