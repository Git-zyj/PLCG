#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)28123;
int var_4 = -1723267964;
unsigned short var_6 = (unsigned short)37245;
int var_7 = -2096216709;
unsigned short var_8 = (unsigned short)64170;
long long int var_10 = -353472870356396126LL;
int zero = 0;
long long int var_14 = 1888534395948575903LL;
long long int var_15 = -5825442947021271087LL;
int var_16 = -1996432490;
long long int var_17 = 6257407636829603932LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
