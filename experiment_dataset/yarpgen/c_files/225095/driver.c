#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2544198412U;
int var_3 = 434077166;
unsigned char var_6 = (unsigned char)230;
long long int var_7 = 6051903524529716543LL;
int var_10 = 1180324325;
unsigned int var_12 = 2211088515U;
long long int var_13 = 4330807395418148607LL;
int var_16 = 1681076158;
int zero = 0;
unsigned int var_18 = 2175817214U;
int var_19 = -1481063512;
signed char var_20 = (signed char)63;
long long int var_21 = -7548421076558708727LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
