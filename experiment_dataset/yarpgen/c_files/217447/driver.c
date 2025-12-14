#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5805090599718437101LL;
short var_1 = (short)22488;
unsigned int var_2 = 2134364523U;
unsigned short var_3 = (unsigned short)23112;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-4;
unsigned int var_16 = 1885026502U;
unsigned short var_17 = (unsigned short)47512;
int zero = 0;
signed char var_18 = (signed char)-94;
int var_19 = -454472237;
unsigned int var_20 = 3584579027U;
void init() {
}

void checksum() {
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
