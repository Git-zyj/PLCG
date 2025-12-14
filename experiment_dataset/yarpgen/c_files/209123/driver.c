#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 306746768U;
short var_4 = (short)21992;
short var_6 = (short)25613;
short var_7 = (short)-28696;
int zero = 0;
short var_11 = (short)6904;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3255619217U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
