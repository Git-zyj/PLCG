#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11374493603148819685ULL;
signed char var_1 = (signed char)91;
int var_12 = -833517291;
long long int var_15 = -3357693855037369582LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1834099547U;
void init() {
}

void checksum() {
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
