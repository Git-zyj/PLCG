#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3427341181U;
short var_8 = (short)-2575;
signed char var_10 = (signed char)-103;
short var_14 = (short)7283;
int zero = 0;
signed char var_15 = (signed char)102;
short var_16 = (short)31106;
unsigned int var_17 = 3303127312U;
unsigned int var_18 = 751252905U;
unsigned char var_19 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
