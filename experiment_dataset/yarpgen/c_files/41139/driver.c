#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 822937915669274644ULL;
unsigned int var_3 = 2220390034U;
unsigned short var_5 = (unsigned short)43294;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -87770945;
void init() {
}

void checksum() {
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
