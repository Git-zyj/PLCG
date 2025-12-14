#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3684847546462612948LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)52;
int zero = 0;
int var_17 = -1733285323;
unsigned long long int var_18 = 13175542311994169532ULL;
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
