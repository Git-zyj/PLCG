#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)17;
unsigned long long int var_4 = 14994480137887305257ULL;
int var_7 = 2110818123;
int var_8 = -720818889;
int zero = 0;
unsigned long long int var_15 = 444033464307688923ULL;
unsigned long long int var_16 = 4655296010206415777ULL;
void init() {
}

void checksum() {
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
