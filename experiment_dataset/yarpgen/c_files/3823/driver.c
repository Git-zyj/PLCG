#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65042;
int var_5 = 1379698282;
short var_6 = (short)21663;
long long int var_7 = -1513491884548371056LL;
long long int var_8 = 249518985974319352LL;
short var_12 = (short)24328;
int zero = 0;
short var_14 = (short)14390;
_Bool var_15 = (_Bool)0;
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
