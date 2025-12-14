#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1854302519U;
unsigned char var_3 = (unsigned char)68;
unsigned int var_7 = 4146720367U;
unsigned char var_10 = (unsigned char)139;
int zero = 0;
unsigned int var_12 = 541267793U;
short var_13 = (short)-10901;
short var_14 = (short)-24168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
