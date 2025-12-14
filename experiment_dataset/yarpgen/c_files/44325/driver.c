#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1479185739;
unsigned int var_6 = 220643229U;
long long int var_10 = -1892284360231746868LL;
_Bool var_14 = (_Bool)1;
long long int var_17 = 64235672483563836LL;
int zero = 0;
int var_19 = -1936115769;
int var_20 = 1349185040;
int var_21 = 193644519;
unsigned long long int var_22 = 15752084797254809030ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
