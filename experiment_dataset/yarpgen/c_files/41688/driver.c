#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1837465125587499277ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1824400276205841921LL;
unsigned long long int var_13 = 18396062892274308126ULL;
int zero = 0;
int var_16 = -2067394178;
unsigned int var_17 = 319355525U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7942756051656867063LL;
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
