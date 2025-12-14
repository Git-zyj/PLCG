#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4092540146U;
short var_5 = (short)-7455;
signed char var_7 = (signed char)-81;
short var_10 = (short)7110;
unsigned long long int var_11 = 17872523763564990868ULL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-23327;
short var_14 = (short)16310;
unsigned long long int var_15 = 15894519827499496387ULL;
int zero = 0;
unsigned long long int var_18 = 13295303731870262526ULL;
unsigned char var_19 = (unsigned char)213;
_Bool var_20 = (_Bool)1;
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
