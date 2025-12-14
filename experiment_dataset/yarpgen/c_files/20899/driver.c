#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41701;
unsigned short var_5 = (unsigned short)29531;
unsigned int var_7 = 119312998U;
unsigned int var_8 = 348982540U;
unsigned short var_9 = (unsigned short)25106;
unsigned short var_10 = (unsigned short)46380;
long long int var_11 = 7293977942347694201LL;
int zero = 0;
unsigned int var_12 = 964517172U;
short var_13 = (short)22107;
unsigned int var_14 = 100819362U;
unsigned short var_15 = (unsigned short)23369;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
