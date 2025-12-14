#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -787180237334678352LL;
short var_2 = (short)-1725;
signed char var_4 = (signed char)127;
short var_5 = (short)-2330;
short var_6 = (short)9246;
long long int var_8 = 6520140103815294442LL;
long long int var_13 = -6649075473810173099LL;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 1148545269U;
unsigned char var_18 = (unsigned char)211;
int zero = 0;
unsigned char var_19 = (unsigned char)195;
long long int var_20 = 5418938091133323415LL;
short var_21 = (short)-14269;
unsigned int var_22 = 2414419488U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
