#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29827;
short var_1 = (short)-23394;
short var_3 = (short)-25014;
long long int var_4 = -2956756073077039225LL;
signed char var_9 = (signed char)-64;
long long int var_10 = 6957351761711895135LL;
int zero = 0;
short var_14 = (short)5984;
signed char var_15 = (signed char)-86;
short var_16 = (short)5916;
void init() {
}

void checksum() {
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
