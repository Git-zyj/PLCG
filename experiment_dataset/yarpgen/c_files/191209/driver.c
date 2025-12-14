#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2101606062523710659LL;
long long int var_5 = 2944347562558347573LL;
int zero = 0;
unsigned short var_12 = (unsigned short)25564;
unsigned long long int var_13 = 18298219791101750682ULL;
int var_14 = -183202316;
unsigned char var_15 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
