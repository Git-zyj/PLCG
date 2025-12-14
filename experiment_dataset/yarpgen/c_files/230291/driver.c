#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2545482969U;
signed char var_6 = (signed char)-81;
unsigned int var_11 = 795026633U;
short var_13 = (short)-8597;
signed char var_16 = (signed char)113;
int zero = 0;
short var_20 = (short)-10575;
long long int var_21 = -1679028153072250738LL;
unsigned long long int var_22 = 11913737735717463428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
