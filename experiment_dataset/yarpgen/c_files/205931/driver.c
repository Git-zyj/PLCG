#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17353;
signed char var_3 = (signed char)102;
short var_4 = (short)9506;
int zero = 0;
unsigned short var_20 = (unsigned short)30376;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3625209934U;
void init() {
}

void checksum() {
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
