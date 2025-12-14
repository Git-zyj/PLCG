#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3509672616101203791LL;
unsigned short var_6 = (unsigned short)33959;
unsigned short var_8 = (unsigned short)4494;
int var_9 = -1905261810;
int zero = 0;
short var_10 = (short)10847;
int var_11 = 566810560;
unsigned char var_12 = (unsigned char)91;
unsigned int var_13 = 1773803098U;
unsigned short var_14 = (unsigned short)30963;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
