#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1067865836;
unsigned long long int var_2 = 9975668264646653328ULL;
long long int var_6 = 8059356913567348928LL;
unsigned long long int var_10 = 16394357237830931374ULL;
short var_12 = (short)19421;
int zero = 0;
int var_17 = -296382757;
int var_18 = -1509715852;
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
