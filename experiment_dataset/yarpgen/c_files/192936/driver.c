#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12206;
long long int var_4 = -38186968700543816LL;
unsigned short var_6 = (unsigned short)24057;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2775812986408375497LL;
int zero = 0;
unsigned int var_11 = 3793764360U;
unsigned int var_12 = 1592204753U;
int var_13 = 947733778;
unsigned long long int var_14 = 3649705975754931315ULL;
int var_15 = 1118209639;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
