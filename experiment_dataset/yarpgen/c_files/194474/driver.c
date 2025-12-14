#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1812;
long long int var_4 = -6959593810404834253LL;
long long int var_12 = -3995855594620526480LL;
short var_13 = (short)-23235;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7820750958293624281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
