#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2047021578U;
unsigned char var_2 = (unsigned char)159;
unsigned short var_3 = (unsigned short)29438;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2632797333U;
long long int var_6 = 7615227459454520105LL;
int zero = 0;
unsigned short var_15 = (unsigned short)8745;
long long int var_16 = -2812197046000243308LL;
int var_17 = -244704161;
void init() {
}

void checksum() {
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
