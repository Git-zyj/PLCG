#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_11 = 742703671;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 3396183934U;
unsigned int var_18 = 1940347497U;
int zero = 0;
signed char var_20 = (signed char)-69;
int var_21 = 2073828103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
