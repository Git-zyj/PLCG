#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-21;
unsigned long long int var_6 = 6303236660449100826ULL;
int zero = 0;
long long int var_14 = 7631616122003849628LL;
unsigned long long int var_15 = 16384805163418092763ULL;
unsigned short var_16 = (unsigned short)41427;
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
