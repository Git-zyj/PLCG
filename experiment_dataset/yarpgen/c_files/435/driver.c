#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
short var_8 = (short)24078;
long long int var_9 = 4684145803529982093LL;
int zero = 0;
long long int var_11 = -5244130636456144215LL;
long long int var_12 = -7502798287230306420LL;
long long int var_13 = -7699374063205422142LL;
long long int var_14 = -7643877591561295786LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
