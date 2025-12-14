#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 485772854U;
int var_1 = -498519475;
signed char var_3 = (signed char)22;
signed char var_11 = (signed char)80;
short var_12 = (short)-1201;
int zero = 0;
short var_15 = (short)3942;
int var_16 = 1987078922;
unsigned int var_17 = 324288367U;
short var_18 = (short)-22107;
short var_19 = (short)-27898;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
