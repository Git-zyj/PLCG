#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)240;
_Bool var_16 = (_Bool)0;
int var_17 = -161312363;
unsigned int var_19 = 168111127U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4182775563U;
unsigned short var_22 = (unsigned short)34098;
unsigned int var_23 = 4131369803U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
