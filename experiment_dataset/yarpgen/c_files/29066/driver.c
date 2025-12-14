#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3336586432U;
long long int var_3 = 1348402707499048770LL;
short var_8 = (short)-17105;
unsigned short var_9 = (unsigned short)31373;
int zero = 0;
unsigned char var_13 = (unsigned char)185;
short var_14 = (short)6367;
int var_15 = -1752920431;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
