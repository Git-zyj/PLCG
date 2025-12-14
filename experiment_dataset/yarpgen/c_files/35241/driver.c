#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_8 = 2526020561U;
unsigned int var_9 = 973583656U;
signed char var_11 = (signed char)(-127 - 1);
signed char var_15 = (signed char)93;
unsigned int var_16 = 3695740067U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1571985293U;
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
