#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 214238924U;
unsigned int var_9 = 2698712388U;
unsigned int var_10 = 2626023366U;
unsigned short var_12 = (unsigned short)26967;
int zero = 0;
unsigned int var_13 = 4158247013U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1927327497113149617LL;
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
