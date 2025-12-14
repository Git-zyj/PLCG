#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)13;
long long int var_8 = 3109687529999377343LL;
short var_14 = (short)-13172;
unsigned short var_19 = (unsigned short)32764;
int zero = 0;
unsigned long long int var_20 = 11196493387854024677ULL;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)114;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
