#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24006;
int var_5 = -521955929;
unsigned short var_6 = (unsigned short)36518;
unsigned long long int var_10 = 6618230455202535988ULL;
unsigned int var_14 = 2157442347U;
short var_17 = (short)-1685;
int zero = 0;
int var_20 = 872934495;
_Bool var_21 = (_Bool)1;
int var_22 = -1812032774;
int var_23 = -14066362;
int var_24 = 2135703436;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
