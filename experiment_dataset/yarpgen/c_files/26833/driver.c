#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18314;
unsigned int var_6 = 2832815618U;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned int var_15 = 4003398999U;
_Bool var_16 = (_Bool)1;
int var_17 = -89725186;
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
