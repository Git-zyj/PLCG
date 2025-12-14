#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)2064;
unsigned int var_2 = 465178200U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3989873788376735311ULL;
unsigned long long int var_5 = 565627357078418639ULL;
unsigned short var_6 = (unsigned short)61735;
unsigned int var_7 = 494869648U;
unsigned int var_8 = 163753113U;
signed char var_9 = (signed char)-86;
int zero = 0;
short var_10 = (short)-12870;
unsigned short var_11 = (unsigned short)40484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
