#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4597645920466241323LL;
long long int var_2 = -5651218294547238522LL;
short var_11 = (short)3506;
short var_13 = (short)-31159;
int zero = 0;
unsigned long long int var_17 = 13103760486136557418ULL;
int var_18 = 1176616736;
void init() {
}

void checksum() {
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
