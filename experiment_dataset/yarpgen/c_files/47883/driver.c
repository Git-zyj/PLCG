#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2113749441U;
unsigned long long int var_3 = 623996962776864110ULL;
long long int var_4 = 3522774111957617583LL;
unsigned long long int var_10 = 1512840186019780714ULL;
signed char var_14 = (signed char)114;
unsigned char var_15 = (unsigned char)20;
long long int var_17 = -6907857031869155708LL;
int zero = 0;
long long int var_19 = -6611437175180102587LL;
int var_20 = -76560162;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
