#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40240;
unsigned short var_8 = (unsigned short)16364;
long long int var_10 = 8517472162200219230LL;
int var_11 = 1963123665;
unsigned short var_13 = (unsigned short)55627;
int zero = 0;
short var_14 = (short)-25503;
signed char var_15 = (signed char)-106;
void init() {
}

void checksum() {
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
