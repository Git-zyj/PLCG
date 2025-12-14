#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12132418661209663979ULL;
_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_16 = (short)-31938;
unsigned int var_17 = 3713950806U;
void init() {
}

void checksum() {
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
