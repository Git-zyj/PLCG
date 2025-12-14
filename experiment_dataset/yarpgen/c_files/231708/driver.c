#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -498351486;
int var_6 = -1488799690;
unsigned short var_8 = (unsigned short)38646;
long long int var_12 = -5500824026485351885LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)8522;
unsigned long long int var_15 = 15704176959835541252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
