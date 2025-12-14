#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1427366045;
int var_3 = -956303671;
unsigned long long int var_4 = 4767538550344027841ULL;
unsigned short var_5 = (unsigned short)54587;
unsigned long long int var_8 = 12766512623754614007ULL;
unsigned short var_9 = (unsigned short)11214;
long long int var_10 = -2670175414035480602LL;
int var_12 = 124874089;
unsigned short var_14 = (unsigned short)24774;
int zero = 0;
int var_17 = -1540898076;
int var_18 = 13231791;
long long int var_19 = -7014762147599018546LL;
unsigned short var_20 = (unsigned short)1180;
long long int var_21 = 2854658876761635488LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
