#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_5 = 1177062441;
unsigned int var_10 = 1645239235U;
long long int var_11 = 8366245890595520776LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6693133455492005288LL;
int var_17 = 1024930148;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
