#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3887230171U;
short var_4 = (short)496;
unsigned long long int var_5 = 8383348559854993366ULL;
unsigned int var_8 = 1760040851U;
int zero = 0;
unsigned long long int var_10 = 6882038368712520015ULL;
short var_11 = (short)12215;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
