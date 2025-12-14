#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45584;
short var_3 = (short)26050;
unsigned short var_11 = (unsigned short)22542;
long long int var_14 = -8220972994970032535LL;
int zero = 0;
int var_16 = 1479439206;
short var_17 = (short)-1433;
unsigned int var_18 = 2499686808U;
unsigned int var_19 = 797659616U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
