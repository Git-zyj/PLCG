#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_8 = (short)-14189;
short var_9 = (short)15585;
unsigned short var_14 = (unsigned short)38805;
short var_19 = (short)12059;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
unsigned long long int var_21 = 7546207886329567743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
