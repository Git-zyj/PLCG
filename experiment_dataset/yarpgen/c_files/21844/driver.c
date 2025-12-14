#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -540982410;
unsigned long long int var_7 = 7276308314073058287ULL;
unsigned short var_12 = (unsigned short)8792;
int zero = 0;
unsigned char var_13 = (unsigned char)202;
unsigned short var_14 = (unsigned short)37107;
unsigned short var_15 = (unsigned short)36850;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
