#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1960771184U;
unsigned long long int var_5 = 13148559072824315815ULL;
signed char var_6 = (signed char)87;
int zero = 0;
unsigned int var_20 = 1140315796U;
long long int var_21 = -146236993743416363LL;
unsigned int var_22 = 1574575235U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
