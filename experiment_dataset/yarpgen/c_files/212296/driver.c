#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17854606022657382954ULL;
long long int var_1 = 1731595598017811543LL;
unsigned long long int var_5 = 15398815621714203651ULL;
unsigned int var_6 = 3311385629U;
unsigned int var_7 = 3974127858U;
long long int var_9 = -6164410694318842499LL;
short var_10 = (short)11771;
unsigned long long int var_14 = 1622961140823505242ULL;
int zero = 0;
int var_15 = 1075104747;
unsigned short var_16 = (unsigned short)13034;
void init() {
}

void checksum() {
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
