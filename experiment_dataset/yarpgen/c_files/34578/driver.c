#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3979235870U;
unsigned short var_1 = (unsigned short)36633;
int var_2 = -720151342;
unsigned int var_3 = 3321022737U;
unsigned int var_4 = 1725970093U;
unsigned int var_5 = 569715709U;
long long int var_9 = -5721692488909875022LL;
int var_11 = 727496058;
int zero = 0;
long long int var_12 = -5465103864981596422LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1678970171U;
unsigned short var_15 = (unsigned short)30595;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
