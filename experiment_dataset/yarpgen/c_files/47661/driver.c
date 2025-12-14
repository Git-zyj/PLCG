#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12900485314460540254ULL;
int var_6 = 864912020;
int var_11 = -2071616557;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-99;
unsigned int var_17 = 606533664U;
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
