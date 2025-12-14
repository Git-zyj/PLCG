#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7914964580237678057LL;
long long int var_6 = -5539313175214227434LL;
unsigned long long int var_7 = 6700195390271144871ULL;
int zero = 0;
long long int var_10 = -8045783450110481321LL;
unsigned long long int var_11 = 17007043541081402948ULL;
signed char var_12 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
