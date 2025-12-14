#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26452;
unsigned int var_2 = 768405562U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-24103;
short var_7 = (short)-26892;
signed char var_9 = (signed char)-110;
short var_12 = (short)-20646;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-22809;
short var_15 = (short)17585;
unsigned long long int var_16 = 3783450140585556393ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
