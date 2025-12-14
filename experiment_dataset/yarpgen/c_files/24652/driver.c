#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 904288132U;
unsigned char var_7 = (unsigned char)199;
_Bool var_8 = (_Bool)0;
signed char var_13 = (signed char)75;
int zero = 0;
unsigned int var_16 = 763220530U;
unsigned long long int var_17 = 5965027433479847264ULL;
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
