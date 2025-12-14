#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2929466369132596927LL;
long long int var_4 = 4000859850510976836LL;
unsigned int var_5 = 113399608U;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)132;
int zero = 0;
short var_10 = (short)24150;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)62930;
unsigned int var_13 = 438525159U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
