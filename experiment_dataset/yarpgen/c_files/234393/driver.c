#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1102614504U;
short var_1 = (short)30140;
long long int var_2 = -2294050931944903161LL;
unsigned char var_3 = (unsigned char)248;
unsigned int var_5 = 2194917407U;
long long int var_8 = -1805045083050707620LL;
unsigned short var_9 = (unsigned short)56003;
short var_10 = (short)2220;
int zero = 0;
unsigned int var_11 = 3340651006U;
unsigned int var_12 = 4234567211U;
long long int var_13 = -6767279022812741596LL;
unsigned int var_14 = 962022705U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
