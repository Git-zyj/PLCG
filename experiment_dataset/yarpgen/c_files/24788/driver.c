#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8316109857004847408ULL;
unsigned int var_6 = 230632998U;
unsigned char var_7 = (unsigned char)95;
_Bool var_11 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 840473027U;
int zero = 0;
unsigned long long int var_18 = 2119763780071327091ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)17274;
void init() {
}

void checksum() {
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
