#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12832962554264476881ULL;
int var_1 = -1375446142;
long long int var_8 = 7301842139851251525LL;
unsigned long long int var_12 = 4104804339106033174ULL;
int zero = 0;
short var_15 = (short)30925;
unsigned char var_16 = (unsigned char)147;
unsigned int var_17 = 1099731487U;
short var_18 = (short)12125;
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
