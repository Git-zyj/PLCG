#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -1467603760;
short var_7 = (short)3976;
unsigned int var_8 = 534812415U;
unsigned long long int var_14 = 1197051796804570841ULL;
unsigned int var_15 = 3472957386U;
int zero = 0;
unsigned short var_16 = (unsigned short)4834;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
