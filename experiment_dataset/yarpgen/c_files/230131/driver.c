#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)77;
_Bool var_4 = (_Bool)1;
short var_6 = (short)4642;
unsigned long long int var_9 = 2307090534133166729ULL;
unsigned long long int var_10 = 1176484299785841200ULL;
unsigned long long int var_11 = 8565965100660950101ULL;
unsigned long long int var_13 = 11462094049576391875ULL;
int zero = 0;
long long int var_17 = -7532251794169042236LL;
short var_18 = (short)-9167;
void init() {
}

void checksum() {
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
