#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_1 = 2309028102U;
long long int var_6 = -8355271020804596808LL;
unsigned int var_7 = 939554699U;
long long int var_9 = -6882605387281189729LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3833088765U;
short var_14 = (short)-17552;
unsigned char var_15 = (unsigned char)139;
int var_16 = 1974914631;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
