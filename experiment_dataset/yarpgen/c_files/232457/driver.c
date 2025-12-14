#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1826955394U;
unsigned short var_11 = (unsigned short)26504;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_20 = -9149215481462311929LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8135651237084465426ULL;
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
