#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23535;
unsigned int var_3 = 1771711318U;
unsigned short var_4 = (unsigned short)24269;
signed char var_7 = (signed char)86;
unsigned short var_10 = (unsigned short)60928;
int var_11 = -938395724;
int zero = 0;
int var_16 = -1191849398;
long long int var_17 = -8163552186313450751LL;
int var_18 = 1511983570;
void init() {
}

void checksum() {
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
