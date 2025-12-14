#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 4758382187890133028ULL;
signed char var_7 = (signed char)-78;
unsigned char var_12 = (unsigned char)188;
signed char var_14 = (signed char)-47;
int var_15 = -1156598705;
unsigned short var_16 = (unsigned short)44656;
unsigned short var_17 = (unsigned short)29198;
int zero = 0;
signed char var_18 = (signed char)-68;
int var_19 = -1764233074;
unsigned char var_20 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
