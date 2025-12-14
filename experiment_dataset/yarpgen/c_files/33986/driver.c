#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = -222689613;
int var_10 = 668488671;
long long int var_11 = -4696726281686466027LL;
long long int var_14 = -4632884900909643691LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -163150718;
int var_18 = 2024862031;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
