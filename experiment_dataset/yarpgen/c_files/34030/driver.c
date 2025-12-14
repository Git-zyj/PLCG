#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 308845758;
int var_4 = -794322819;
unsigned int var_8 = 1650150777U;
signed char var_9 = (signed char)-14;
signed char var_11 = (signed char)-48;
int var_12 = -2004250931;
int zero = 0;
int var_15 = -1972780297;
int var_16 = 603227061;
signed char var_17 = (signed char)-106;
int var_18 = -857952547;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
