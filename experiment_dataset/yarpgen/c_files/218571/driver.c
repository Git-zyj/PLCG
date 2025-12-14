#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
signed char var_2 = (signed char)-21;
signed char var_3 = (signed char)-7;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_9 = -1293530251;
short var_10 = (short)-15486;
unsigned char var_12 = (unsigned char)64;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-31;
unsigned short var_18 = (unsigned short)6850;
long long int var_19 = -5878794402009024710LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
