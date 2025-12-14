#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)23456;
unsigned int var_4 = 1551666376U;
unsigned long long int var_6 = 14576617702655108927ULL;
int var_11 = 1508946740;
int zero = 0;
unsigned int var_16 = 835058284U;
short var_17 = (short)-13904;
long long int var_18 = 1273767304178410946LL;
long long int var_19 = -5776532463877503450LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
