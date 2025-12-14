#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15158261805308308458ULL;
short var_4 = (short)21536;
unsigned short var_5 = (unsigned short)58994;
unsigned short var_6 = (unsigned short)6401;
unsigned short var_7 = (unsigned short)54624;
long long int var_11 = 3303085967873467462LL;
unsigned int var_14 = 1471558351U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -755728788598633072LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
