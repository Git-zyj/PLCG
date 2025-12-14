#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -736994215;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 1402611552U;
int var_8 = 378588835;
_Bool var_10 = (_Bool)0;
long long int var_13 = -1981767411746918915LL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16561792954015892932ULL;
int zero = 0;
short var_16 = (short)-9497;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
