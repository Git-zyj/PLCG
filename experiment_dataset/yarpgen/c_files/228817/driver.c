#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1002410919;
unsigned long long int var_10 = 3751050957449767487ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 1757122444;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-22650;
void init() {
}

void checksum() {
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
