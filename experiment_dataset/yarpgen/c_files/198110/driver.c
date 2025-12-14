#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30398;
short var_1 = (short)2565;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)56;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5618704622344184449LL;
long long int var_17 = -8931338099663639191LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
