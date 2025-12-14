#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -37308911;
_Bool var_6 = (_Bool)0;
int var_8 = -1792126896;
unsigned long long int var_9 = 11796219130956886015ULL;
int var_14 = 475502714;
int var_15 = -1555209041;
int zero = 0;
unsigned int var_16 = 3666857477U;
unsigned int var_17 = 566930822U;
unsigned char var_18 = (unsigned char)148;
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
