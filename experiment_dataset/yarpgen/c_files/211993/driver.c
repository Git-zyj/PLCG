#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15658149557159641624ULL;
unsigned int var_9 = 4034059056U;
short var_13 = (short)13358;
short var_16 = (short)2714;
int zero = 0;
short var_18 = (short)24630;
short var_19 = (short)-4151;
unsigned int var_20 = 2703493187U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
