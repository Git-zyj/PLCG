#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1092447565;
short var_3 = (short)8522;
unsigned int var_6 = 3713032249U;
short var_8 = (short)-4307;
unsigned long long int var_9 = 15844080285757260041ULL;
unsigned short var_11 = (unsigned short)17561;
long long int var_13 = 887958354233464047LL;
unsigned int var_14 = 834654337U;
short var_15 = (short)-16923;
signed char var_16 = (signed char)-31;
unsigned long long int var_17 = 233292519329854424ULL;
int zero = 0;
signed char var_18 = (signed char)12;
unsigned short var_19 = (unsigned short)17407;
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
