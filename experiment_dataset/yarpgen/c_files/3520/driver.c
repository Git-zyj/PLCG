#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3220702800U;
short var_5 = (short)20913;
unsigned short var_7 = (unsigned short)11093;
int var_8 = 1748467309;
int var_12 = 1608817953;
unsigned long long int var_13 = 3526754964196760920ULL;
int var_14 = -2111363413;
unsigned short var_15 = (unsigned short)54726;
int zero = 0;
unsigned int var_19 = 2000299860U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
