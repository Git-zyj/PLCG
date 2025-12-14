#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64864;
long long int var_1 = 1666349680177770014LL;
unsigned int var_3 = 3080285181U;
long long int var_4 = 6220022255069925653LL;
unsigned int var_8 = 512347702U;
short var_9 = (short)-25101;
int zero = 0;
long long int var_10 = -9074997321834159239LL;
unsigned short var_11 = (unsigned short)54038;
unsigned short var_12 = (unsigned short)13835;
unsigned short var_13 = (unsigned short)28374;
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
