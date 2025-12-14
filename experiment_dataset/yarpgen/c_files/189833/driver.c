#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3344037432U;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1031947448U;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-28111;
void init() {
}

void checksum() {
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
