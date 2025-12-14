#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-32;
int var_10 = 177940701;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)36;
int var_16 = 393085651;
unsigned short var_17 = (unsigned short)16327;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
