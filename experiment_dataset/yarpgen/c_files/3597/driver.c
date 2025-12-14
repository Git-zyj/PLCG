#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-118;
short var_5 = (short)-9298;
unsigned int var_7 = 4217242524U;
unsigned short var_9 = (unsigned short)33792;
int var_12 = -127069397;
long long int var_13 = -2633789588393777245LL;
int zero = 0;
unsigned long long int var_14 = 3941095813464339857ULL;
unsigned int var_15 = 3159925841U;
long long int var_16 = 3109127623350200364LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
