#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19736;
unsigned int var_4 = 587079861U;
unsigned short var_15 = (unsigned short)29099;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)143;
int var_21 = -1686900931;
unsigned short var_22 = (unsigned short)56528;
long long int var_23 = 1896563270092911727LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
