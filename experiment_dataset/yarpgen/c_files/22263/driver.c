#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4360;
long long int var_6 = 2264913658229720607LL;
unsigned long long int var_14 = 17383034590658171328ULL;
int zero = 0;
long long int var_15 = 8601284909536156593LL;
unsigned long long int var_16 = 13159362153931144463ULL;
unsigned char var_17 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
