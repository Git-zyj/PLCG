#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)20;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 771650791U;
short var_12 = (short)-28774;
int var_13 = -1053497838;
int zero = 0;
int var_16 = 340258099;
unsigned int var_17 = 1949131362U;
int var_18 = -2067266541;
short var_19 = (short)-11815;
int var_20 = -540774685;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
