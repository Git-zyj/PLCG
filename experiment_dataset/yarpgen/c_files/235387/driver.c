#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 1089682405U;
unsigned char var_7 = (unsigned char)173;
unsigned short var_8 = (unsigned short)25962;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 781787676U;
unsigned char var_13 = (unsigned char)175;
short var_14 = (short)15800;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
