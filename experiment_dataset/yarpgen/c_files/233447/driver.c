#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2050328575U;
unsigned short var_6 = (unsigned short)52056;
short var_8 = (short)25307;
int var_12 = -779900982;
int zero = 0;
unsigned int var_14 = 1625705675U;
unsigned long long int var_15 = 7185348183916611006ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
