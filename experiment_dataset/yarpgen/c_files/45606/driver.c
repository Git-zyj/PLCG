#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9997;
unsigned int var_2 = 1090410000U;
_Bool var_6 = (_Bool)0;
unsigned int var_12 = 3761965048U;
unsigned int var_17 = 484599659U;
unsigned char var_18 = (unsigned char)222;
int zero = 0;
unsigned char var_20 = (unsigned char)196;
unsigned char var_21 = (unsigned char)171;
unsigned short var_22 = (unsigned short)2988;
unsigned int var_23 = 3718053884U;
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
