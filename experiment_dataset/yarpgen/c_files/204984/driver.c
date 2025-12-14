#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20419;
short var_5 = (short)-32688;
unsigned int var_6 = 2616002580U;
short var_10 = (short)-10470;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)76;
unsigned int var_14 = 1316822761U;
long long int var_15 = 6135670010017705270LL;
void init() {
}

void checksum() {
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
