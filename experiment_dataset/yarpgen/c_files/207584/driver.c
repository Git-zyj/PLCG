#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_13 = (unsigned char)43;
unsigned long long int var_17 = 1744449745716414005ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
unsigned char var_21 = (unsigned char)210;
unsigned long long int var_22 = 5170507215568793509ULL;
signed char var_23 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
