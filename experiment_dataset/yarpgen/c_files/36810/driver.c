#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-28210;
_Bool var_9 = (_Bool)1;
int var_11 = -1574571814;
unsigned int var_13 = 3236801306U;
int zero = 0;
unsigned int var_14 = 50455289U;
unsigned long long int var_15 = 6990153025861265713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
