#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_6 = (short)10799;
unsigned int var_11 = 3000625484U;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-28812;
int zero = 0;
short var_19 = (short)16692;
unsigned int var_20 = 3574175407U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
