#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14695;
long long int var_6 = -8574784824132130343LL;
short var_7 = (short)-671;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18399444330568652600ULL;
int zero = 0;
unsigned int var_14 = 108376835U;
unsigned int var_15 = 1428863334U;
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
