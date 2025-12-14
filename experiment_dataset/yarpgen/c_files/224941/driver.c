#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 897335564;
signed char var_7 = (signed char)64;
long long int var_9 = -7762624377202852730LL;
unsigned long long int var_10 = 15081012148098154691ULL;
int zero = 0;
short var_12 = (short)-10866;
long long int var_13 = -2137001300465205678LL;
int var_14 = 474356980;
long long int var_15 = -3883883036606370995LL;
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
