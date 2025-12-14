#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
_Bool var_3 = (_Bool)1;
signed char var_9 = (signed char)43;
unsigned long long int var_14 = 10626798457804055904ULL;
signed char var_15 = (signed char)-40;
int zero = 0;
int var_16 = -2031034355;
short var_17 = (short)-31594;
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
