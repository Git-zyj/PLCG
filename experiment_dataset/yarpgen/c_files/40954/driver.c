#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2840652024720426333LL;
short var_3 = (short)-7189;
signed char var_4 = (signed char)-12;
short var_5 = (short)-24037;
long long int var_6 = -6614364627622569063LL;
short var_8 = (short)24516;
signed char var_10 = (signed char)-98;
int zero = 0;
long long int var_11 = 7736047260886552492LL;
short var_12 = (short)-9146;
short var_13 = (short)2702;
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
