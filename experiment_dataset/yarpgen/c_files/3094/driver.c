#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3568362053U;
int var_3 = 427080125;
long long int var_6 = -4833703353422182935LL;
unsigned short var_7 = (unsigned short)61011;
long long int var_10 = 1434093095954958913LL;
int zero = 0;
signed char var_11 = (signed char)-14;
unsigned short var_12 = (unsigned short)24051;
long long int var_13 = -3071107386399503100LL;
unsigned short var_14 = (unsigned short)30849;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
