#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -138322822;
unsigned int var_10 = 581609260U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)90;
short var_22 = (short)15542;
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
