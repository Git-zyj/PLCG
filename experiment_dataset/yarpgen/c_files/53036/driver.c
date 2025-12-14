#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-40;
unsigned short var_3 = (unsigned short)2897;
unsigned int var_4 = 3033798587U;
unsigned long long int var_5 = 15607964137010367022ULL;
unsigned long long int var_6 = 13564478744768719458ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 1633699069;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 799448526;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
