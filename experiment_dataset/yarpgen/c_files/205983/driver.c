#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -431065527;
unsigned char var_2 = (unsigned char)188;
int var_7 = 1476881452;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_19 = (short)25189;
int var_20 = 2133757764;
unsigned short var_21 = (unsigned short)12996;
void init() {
}

void checksum() {
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
