#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-24263;
long long int var_10 = 1469046724873237475LL;
signed char var_11 = (signed char)11;
long long int var_12 = 1537401888402758156LL;
signed char var_13 = (signed char)-37;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = -2791890622365141275LL;
unsigned int var_16 = 783681684U;
unsigned long long int var_17 = 400203969944249439ULL;
void init() {
}

void checksum() {
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
