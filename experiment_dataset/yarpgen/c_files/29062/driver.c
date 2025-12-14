#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23354;
unsigned char var_2 = (unsigned char)227;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-108;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)23245;
signed char var_13 = (signed char)6;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
unsigned long long int var_16 = 3214735517585351456ULL;
_Bool var_17 = (_Bool)0;
int var_18 = -736733734;
void init() {
}

void checksum() {
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
