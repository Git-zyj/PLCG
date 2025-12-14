#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1714394266U;
unsigned char var_6 = (unsigned char)160;
int zero = 0;
unsigned long long int var_13 = 10856791360515744371ULL;
long long int var_14 = 2995794383608127552LL;
unsigned short var_15 = (unsigned short)61047;
void init() {
}

void checksum() {
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
