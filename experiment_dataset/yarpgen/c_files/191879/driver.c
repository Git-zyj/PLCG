#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8667056512752825400LL;
int var_3 = 2081898983;
int var_4 = -1101765548;
int var_8 = -520907979;
long long int var_11 = -8398117738183496822LL;
int var_12 = -1733141970;
int zero = 0;
unsigned short var_14 = (unsigned short)280;
int var_15 = 610638117;
long long int var_16 = -6048482589688930013LL;
signed char var_17 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
