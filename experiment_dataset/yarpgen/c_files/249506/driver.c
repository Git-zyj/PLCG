#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned short var_2 = (unsigned short)4541;
short var_3 = (short)-6678;
unsigned int var_5 = 1326251592U;
long long int var_7 = -4444630584879922826LL;
unsigned int var_10 = 1724383588U;
unsigned int var_16 = 4193673448U;
int zero = 0;
short var_17 = (short)-8910;
short var_18 = (short)17443;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 114709868U;
void init() {
}

void checksum() {
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
