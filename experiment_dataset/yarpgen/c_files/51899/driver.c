#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 2072197852;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3989508960U;
int zero = 0;
unsigned int var_17 = 2144912370U;
long long int var_18 = -4046125134600618146LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3485158752U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
