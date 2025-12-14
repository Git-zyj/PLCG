#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)212;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3224269698U;
unsigned int var_10 = 2791286552U;
int zero = 0;
unsigned int var_13 = 3454851616U;
unsigned int var_14 = 3328345863U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
