#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 9234028444097706322ULL;
long long int var_8 = 322906601014759239LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 237094101U;
int var_13 = 1652732412;
unsigned char var_14 = (unsigned char)248;
unsigned int var_15 = 1969510957U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
