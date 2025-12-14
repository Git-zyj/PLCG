#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14859926476669617257ULL;
short var_2 = (short)7571;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1580977663U;
_Bool var_13 = (_Bool)1;
int var_16 = 1518920653;
int zero = 0;
unsigned int var_19 = 1094021950U;
short var_20 = (short)8337;
short var_21 = (short)-29125;
void init() {
}

void checksum() {
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
