#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 108932382U;
short var_5 = (short)-12299;
unsigned int var_6 = 1012698893U;
unsigned int var_13 = 2616765603U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)30861;
unsigned int var_20 = 2054481160U;
long long int var_21 = 4307389801879085082LL;
long long int var_22 = 811656329708968406LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
