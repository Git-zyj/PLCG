#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 15214499488763468438ULL;
unsigned long long int var_10 = 14813936959951653368ULL;
unsigned long long int var_13 = 13840770546205790831ULL;
int zero = 0;
signed char var_14 = (signed char)-51;
long long int var_15 = -5263651788786476715LL;
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
