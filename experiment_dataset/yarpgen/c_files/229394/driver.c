#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24974;
unsigned int var_3 = 3915280061U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)17768;
int var_10 = -17299313;
int var_18 = 1447866457;
int zero = 0;
unsigned long long int var_20 = 8358996415267176595ULL;
int var_21 = -2059903467;
unsigned short var_22 = (unsigned short)16117;
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
