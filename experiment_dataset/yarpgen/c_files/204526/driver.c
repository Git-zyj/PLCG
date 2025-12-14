#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
short var_2 = (short)20965;
long long int var_3 = -6776348046270212232LL;
_Bool var_5 = (_Bool)1;
int var_8 = -1904234282;
int zero = 0;
unsigned int var_15 = 4006769865U;
short var_16 = (short)14855;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
