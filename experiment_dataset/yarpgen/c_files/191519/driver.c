#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3967642460U;
unsigned short var_3 = (unsigned short)44589;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-15434;
int var_12 = -726635513;
unsigned char var_14 = (unsigned char)65;
int zero = 0;
long long int var_16 = 8141350467135731293LL;
long long int var_17 = 7256687751272047624LL;
unsigned char var_18 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
