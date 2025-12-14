#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17985;
int var_2 = 294823025;
unsigned short var_5 = (unsigned short)8355;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 16867885291712096383ULL;
int var_15 = -352940272;
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
