#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1152725417U;
unsigned int var_4 = 1806978954U;
unsigned short var_5 = (unsigned short)17884;
signed char var_6 = (signed char)-58;
int var_7 = 1334289538;
signed char var_11 = (signed char)-47;
unsigned int var_12 = 433918542U;
int zero = 0;
signed char var_15 = (signed char)-33;
unsigned int var_16 = 3999298872U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
