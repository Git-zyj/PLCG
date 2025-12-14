#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)72;
signed char var_6 = (signed char)83;
short var_7 = (short)17113;
signed char var_8 = (signed char)63;
unsigned long long int var_12 = 540500641584836882ULL;
long long int var_13 = -6137697859889841844LL;
int var_14 = 209400970;
long long int var_16 = -1983393543034114165LL;
int zero = 0;
long long int var_18 = 6302780907554483663LL;
int var_19 = -363749119;
unsigned int var_20 = 1075745255U;
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
