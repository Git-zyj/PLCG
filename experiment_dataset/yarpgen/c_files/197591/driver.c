#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = 2654548717636530280LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)87;
long long int var_10 = 5878147850734632449LL;
short var_12 = (short)802;
int zero = 0;
long long int var_15 = 8340687022584906399LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
