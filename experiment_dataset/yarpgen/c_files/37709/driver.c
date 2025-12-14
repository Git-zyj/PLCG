#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 850907605U;
short var_5 = (short)-32056;
unsigned short var_6 = (unsigned short)28966;
long long int var_8 = -6164389943468670399LL;
unsigned long long int var_9 = 1581895178190414039ULL;
int var_10 = -1695565126;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned char var_13 = (unsigned char)21;
void init() {
}

void checksum() {
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
