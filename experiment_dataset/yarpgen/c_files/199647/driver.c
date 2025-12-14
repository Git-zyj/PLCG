#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57965;
unsigned long long int var_13 = 186116705554422905ULL;
long long int var_15 = -3890022773882810732LL;
int zero = 0;
unsigned int var_16 = 4286577291U;
int var_17 = -29071526;
unsigned short var_18 = (unsigned short)59739;
short var_19 = (short)362;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
