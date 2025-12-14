#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1883295103;
unsigned short var_8 = (unsigned short)35023;
unsigned long long int var_9 = 10384417996612025887ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)122;
long long int var_16 = -301066927786040485LL;
short var_17 = (short)19819;
unsigned short var_18 = (unsigned short)23342;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
