#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_9 = -1268612266;
signed char var_10 = (signed char)61;
unsigned char var_13 = (unsigned char)203;
int zero = 0;
unsigned long long int var_14 = 18132862932970715610ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
