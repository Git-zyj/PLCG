#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 6597003168600604882ULL;
unsigned long long int var_12 = 3643185290764328765ULL;
signed char var_13 = (signed char)76;
int var_14 = -1638998342;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12871005544820292223ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 2091517776;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
