#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7653600310608225790ULL;
unsigned long long int var_5 = 15533049814215399770ULL;
unsigned long long int var_8 = 11791884743754465096ULL;
unsigned long long int var_11 = 7646431558105856679ULL;
unsigned long long int var_12 = 11221375156850415503ULL;
signed char var_13 = (signed char)-52;
unsigned short var_17 = (unsigned short)23064;
int zero = 0;
int var_18 = 482254550;
short var_19 = (short)-7821;
unsigned long long int var_20 = 6066116479346774101ULL;
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
