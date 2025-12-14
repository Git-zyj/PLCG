#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17624;
int var_1 = 707187837;
unsigned short var_7 = (unsigned short)46082;
unsigned char var_8 = (unsigned char)209;
unsigned int var_10 = 2856387050U;
unsigned int var_12 = 889791362U;
int zero = 0;
signed char var_14 = (signed char)84;
long long int var_15 = 7493655198989735098LL;
short var_16 = (short)32069;
void init() {
}

void checksum() {
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
