#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)95;
short var_11 = (short)20963;
unsigned short var_12 = (unsigned short)24897;
int zero = 0;
short var_13 = (short)-2765;
long long int var_14 = 4682625527338420118LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3070836731063401889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
