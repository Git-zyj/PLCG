#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)13123;
unsigned long long int var_3 = 2390583953777736775ULL;
unsigned int var_4 = 2661790776U;
int var_6 = -1065182758;
unsigned long long int var_7 = 5437006087198659171ULL;
unsigned char var_8 = (unsigned char)104;
unsigned short var_9 = (unsigned short)29227;
short var_10 = (short)24671;
_Bool var_12 = (_Bool)0;
int var_13 = 1646320159;
int zero = 0;
short var_14 = (short)-5397;
unsigned long long int var_15 = 12350659363092126987ULL;
unsigned short var_16 = (unsigned short)36355;
long long int var_17 = -6950969976338919911LL;
unsigned long long int var_18 = 12891585587964406823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
