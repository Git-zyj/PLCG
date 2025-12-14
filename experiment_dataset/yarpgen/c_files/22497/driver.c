#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3591170052U;
int var_4 = 763060134;
long long int var_5 = -1620266689253508678LL;
int var_9 = 1094465239;
short var_12 = (short)11903;
short var_15 = (short)-15397;
int zero = 0;
unsigned int var_16 = 3673517837U;
signed char var_17 = (signed char)-46;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
