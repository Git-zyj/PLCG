#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
int var_2 = -1272848827;
signed char var_5 = (signed char)109;
long long int var_7 = 8913458725227887500LL;
int var_10 = 482087294;
short var_12 = (short)-5978;
signed char var_13 = (signed char)16;
int var_14 = 1303078891;
long long int var_15 = -4092248982639772403LL;
int zero = 0;
short var_16 = (short)20666;
unsigned int var_17 = 1481934420U;
long long int var_18 = 5666728620672637473LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
