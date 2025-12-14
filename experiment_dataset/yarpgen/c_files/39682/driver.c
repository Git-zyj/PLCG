#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6307;
int var_5 = -1115246585;
short var_9 = (short)16665;
unsigned int var_11 = 1364114072U;
unsigned int var_13 = 3932360485U;
unsigned short var_16 = (unsigned short)56282;
int zero = 0;
short var_18 = (short)-15677;
short var_19 = (short)-22778;
short var_20 = (short)4699;
unsigned int var_21 = 2950879937U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
