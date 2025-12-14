#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2021982529U;
unsigned long long int var_6 = 2383942151526359084ULL;
unsigned short var_7 = (unsigned short)20740;
unsigned short var_11 = (unsigned short)45695;
int var_16 = 590500353;
int zero = 0;
signed char var_17 = (signed char)-5;
unsigned int var_18 = 1556994726U;
void init() {
}

void checksum() {
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
