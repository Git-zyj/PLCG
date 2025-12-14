#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4830838307196456527LL;
unsigned char var_5 = (unsigned char)153;
unsigned int var_6 = 2907914175U;
unsigned short var_11 = (unsigned short)12994;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)1765;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
