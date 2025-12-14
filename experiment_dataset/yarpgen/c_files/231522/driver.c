#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -511213428;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_16 = -9178413710215469532LL;
unsigned short var_17 = (unsigned short)29965;
unsigned int var_18 = 170809485U;
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
