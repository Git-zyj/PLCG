#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)178;
short var_6 = (short)-28687;
short var_9 = (short)-23658;
unsigned int var_12 = 3477177544U;
int var_15 = 578031405;
int var_16 = -832165896;
int var_18 = -1727871715;
int zero = 0;
unsigned long long int var_20 = 16006096727839161831ULL;
unsigned long long int var_21 = 5198320811570462473ULL;
short var_22 = (short)-4461;
short var_23 = (short)12575;
void init() {
}

void checksum() {
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
