#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7106;
unsigned long long int var_3 = 14737264922605273378ULL;
int zero = 0;
unsigned int var_13 = 2853618554U;
unsigned short var_14 = (unsigned short)48408;
unsigned long long int var_15 = 870782656079910371ULL;
long long int var_16 = 2014799689757963267LL;
short var_17 = (short)9664;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
