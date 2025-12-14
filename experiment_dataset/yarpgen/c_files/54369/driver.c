#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 667907830;
unsigned int var_5 = 2463552827U;
unsigned int var_10 = 271633987U;
short var_11 = (short)26095;
int zero = 0;
long long int var_13 = 4610453068216798814LL;
unsigned int var_14 = 2815925491U;
unsigned short var_15 = (unsigned short)65080;
int var_16 = -1095146004;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
