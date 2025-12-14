#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)33258;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_15 = 2331428559465002379LL;
int zero = 0;
long long int var_18 = -1607065910195570087LL;
long long int var_19 = -7058760136662404667LL;
void init() {
}

void checksum() {
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
