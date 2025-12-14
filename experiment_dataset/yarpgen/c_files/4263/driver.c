#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2680576914927939248ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)19144;
unsigned long long int var_14 = 8713016352253137963ULL;
unsigned int var_15 = 3424158112U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
