#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 1059397566U;
short var_15 = (short)1116;
int var_17 = 123809246;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
int var_21 = -1452364738;
unsigned int var_22 = 847647109U;
unsigned char var_23 = (unsigned char)249;
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
