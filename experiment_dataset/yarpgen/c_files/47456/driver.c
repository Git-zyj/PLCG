#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15253;
unsigned long long int var_6 = 5904963115029913271ULL;
short var_9 = (short)6527;
_Bool var_10 = (_Bool)1;
unsigned short var_16 = (unsigned short)51437;
int zero = 0;
long long int var_18 = 108361393542082183LL;
long long int var_19 = -5204254326489106813LL;
short var_20 = (short)-26140;
unsigned short var_21 = (unsigned short)498;
unsigned int var_22 = 3897249364U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
