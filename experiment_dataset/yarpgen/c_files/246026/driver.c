#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4101330813466037433LL;
long long int var_3 = 2274423299792172725LL;
int var_4 = -1750407485;
unsigned short var_5 = (unsigned short)35101;
unsigned char var_6 = (unsigned char)117;
int zero = 0;
unsigned int var_12 = 374907801U;
unsigned short var_13 = (unsigned short)55189;
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
