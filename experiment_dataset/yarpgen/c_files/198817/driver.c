#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_7 = 2522546860U;
short var_8 = (short)-10431;
int zero = 0;
unsigned long long int var_10 = 11213938143700632061ULL;
unsigned int var_11 = 544463706U;
unsigned long long int var_12 = 16676092266867993688ULL;
unsigned short var_13 = (unsigned short)26932;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
