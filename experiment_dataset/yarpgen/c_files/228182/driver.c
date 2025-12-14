#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3102619319U;
unsigned char var_3 = (unsigned char)88;
_Bool var_4 = (_Bool)1;
unsigned short var_11 = (unsigned short)51775;
int zero = 0;
unsigned short var_17 = (unsigned short)30607;
long long int var_18 = -8032745183742057413LL;
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
