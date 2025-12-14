#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1933795858;
unsigned long long int var_10 = 5634608647452197928ULL;
int var_13 = -1471281308;
int zero = 0;
long long int var_16 = -6506077423978783889LL;
signed char var_17 = (signed char)-83;
unsigned short var_18 = (unsigned short)35734;
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
