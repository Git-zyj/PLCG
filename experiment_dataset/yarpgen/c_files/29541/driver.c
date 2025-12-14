#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
long long int var_6 = 9204431002534931416LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -1765713236350845295LL;
unsigned short var_9 = (unsigned short)63405;
unsigned short var_11 = (unsigned short)42471;
unsigned int var_12 = 386344312U;
long long int var_13 = 4105801025591241179LL;
unsigned char var_14 = (unsigned char)231;
short var_15 = (short)-25877;
int zero = 0;
unsigned short var_17 = (unsigned short)25016;
unsigned int var_18 = 2592669030U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
