#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 2468035855400762470ULL;
short var_8 = (short)-7225;
unsigned long long int var_13 = 9592840551135740815ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)15;
void init() {
}

void checksum() {
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
