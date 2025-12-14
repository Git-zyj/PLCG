#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_7 = -2424958499004610868LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-18204;
int zero = 0;
unsigned int var_12 = 2356979275U;
int var_13 = -119294141;
unsigned short var_14 = (unsigned short)26197;
signed char var_15 = (signed char)87;
unsigned short var_16 = (unsigned short)24697;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
