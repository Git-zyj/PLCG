#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29065;
unsigned short var_7 = (unsigned short)3485;
long long int var_13 = -850037696535120075LL;
signed char var_14 = (signed char)-20;
unsigned long long int var_15 = 155490543914366594ULL;
int zero = 0;
long long int var_18 = 5751145752517174784LL;
long long int var_19 = 142787993049558760LL;
unsigned long long int var_20 = 15021209852601472225ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
