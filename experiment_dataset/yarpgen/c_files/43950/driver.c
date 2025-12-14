#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)28738;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
long long int var_18 = 1896818433300940663LL;
unsigned int var_19 = 2851842706U;
int zero = 0;
short var_20 = (short)19540;
long long int var_21 = 4702473378713451LL;
unsigned int var_22 = 2454394478U;
unsigned char var_23 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
