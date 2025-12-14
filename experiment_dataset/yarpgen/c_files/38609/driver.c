#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48601;
unsigned long long int var_6 = 15976242834242595568ULL;
int var_9 = -542520908;
int var_11 = -597634811;
long long int var_12 = -8633132171027287067LL;
unsigned int var_13 = 2485358256U;
short var_14 = (short)24698;
int zero = 0;
unsigned long long int var_15 = 17472626425874287410ULL;
signed char var_16 = (signed char)117;
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
