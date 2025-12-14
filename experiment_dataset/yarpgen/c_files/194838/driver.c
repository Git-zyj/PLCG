#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64506;
unsigned short var_4 = (unsigned short)35880;
unsigned short var_5 = (unsigned short)35250;
unsigned short var_7 = (unsigned short)25395;
unsigned short var_8 = (unsigned short)39701;
unsigned short var_12 = (unsigned short)11173;
unsigned short var_13 = (unsigned short)20151;
unsigned short var_14 = (unsigned short)63429;
unsigned short var_16 = (unsigned short)5805;
int zero = 0;
unsigned short var_18 = (unsigned short)48965;
unsigned short var_19 = (unsigned short)42684;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
