#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16991551961239911661ULL;
unsigned long long int var_11 = 7431253296497820470ULL;
int var_14 = 1489201438;
int var_16 = -1849473553;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)14077;
short var_19 = (short)-28237;
unsigned char var_20 = (unsigned char)33;
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
