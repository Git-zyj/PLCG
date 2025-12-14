#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 2182079169961070525LL;
int var_8 = -2033857145;
signed char var_10 = (signed char)118;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 416142206;
unsigned int var_13 = 2250317702U;
unsigned long long int var_14 = 16828334775107545044ULL;
unsigned short var_15 = (unsigned short)31736;
void init() {
}

void checksum() {
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
