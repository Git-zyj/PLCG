#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 77022381U;
unsigned int var_3 = 257144171U;
unsigned long long int var_7 = 17147954293090535513ULL;
unsigned int var_10 = 1318571646U;
int zero = 0;
unsigned int var_16 = 1643640229U;
unsigned long long int var_17 = 3698782402136284943ULL;
void init() {
}

void checksum() {
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
