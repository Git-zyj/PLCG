#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1881151715;
_Bool var_3 = (_Bool)0;
int var_10 = -1871465845;
int var_12 = -220860210;
int zero = 0;
unsigned char var_14 = (unsigned char)149;
int var_15 = -1272790646;
int var_16 = -702116704;
int var_17 = -1372892549;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
