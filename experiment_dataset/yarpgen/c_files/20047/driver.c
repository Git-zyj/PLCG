#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3833648342U;
unsigned long long int var_3 = 17666852582293528854ULL;
signed char var_4 = (signed char)-46;
short var_5 = (short)-16342;
short var_7 = (short)9210;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-14379;
int var_11 = 1280147587;
short var_14 = (short)6284;
int zero = 0;
unsigned int var_18 = 1006447859U;
unsigned short var_19 = (unsigned short)47953;
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
