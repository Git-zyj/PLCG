#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7790145495966724293LL;
int var_9 = -575481973;
unsigned int var_11 = 2303905675U;
short var_12 = (short)-15452;
unsigned short var_13 = (unsigned short)44111;
int zero = 0;
short var_14 = (short)25179;
unsigned int var_15 = 3841426009U;
unsigned long long int var_16 = 4109776224141724291ULL;
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
