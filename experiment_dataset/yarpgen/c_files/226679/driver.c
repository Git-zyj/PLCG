#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3881966920U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -9026839354563306329LL;
long long int var_8 = 2543237940494455437LL;
int zero = 0;
unsigned short var_10 = (unsigned short)53752;
short var_11 = (short)11982;
int var_12 = -1600133696;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
