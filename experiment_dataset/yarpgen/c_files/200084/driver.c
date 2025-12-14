#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1350455787U;
unsigned short var_2 = (unsigned short)31466;
unsigned int var_4 = 1814236669U;
unsigned short var_6 = (unsigned short)13065;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-20901;
int var_11 = -776967986;
int zero = 0;
short var_14 = (short)18026;
unsigned int var_15 = 3220492762U;
unsigned long long int var_16 = 602380006789027106ULL;
short var_17 = (short)-26446;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
