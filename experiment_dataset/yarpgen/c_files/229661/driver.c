#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 13275867558271391350ULL;
unsigned short var_2 = (unsigned short)25411;
int var_3 = 1129990910;
long long int var_4 = 1498762123579206991LL;
unsigned int var_6 = 3033007199U;
int var_7 = -241015026;
unsigned int var_8 = 2191164039U;
unsigned int var_14 = 4031871068U;
unsigned int var_15 = 3521658953U;
long long int var_16 = 3794221610607058200LL;
int var_17 = 1874396411;
short var_19 = (short)8113;
int zero = 0;
unsigned int var_20 = 3517855753U;
signed char var_21 = (signed char)-121;
int var_22 = 203283927;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
