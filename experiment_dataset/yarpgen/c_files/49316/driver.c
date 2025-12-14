#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)75;
long long int var_7 = 4973717603171374377LL;
long long int var_12 = -2723406877021196303LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -3754917563878950070LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
