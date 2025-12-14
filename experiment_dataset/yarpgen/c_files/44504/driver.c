#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1962656056;
unsigned char var_2 = (unsigned char)161;
int var_3 = -151798352;
unsigned long long int var_4 = 15950661924898426467ULL;
unsigned char var_5 = (unsigned char)118;
unsigned int var_6 = 1937769355U;
long long int var_7 = 7478234862257049035LL;
long long int var_9 = -4297487377486517259LL;
short var_10 = (short)-23651;
int zero = 0;
long long int var_11 = -1314922337229215039LL;
int var_12 = 1973663127;
unsigned int var_13 = 4265652267U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
