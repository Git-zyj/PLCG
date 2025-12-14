#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4243361856677196982LL;
short var_8 = (short)643;
int var_9 = -1191346537;
unsigned char var_10 = (unsigned char)94;
unsigned int var_11 = 2991667720U;
unsigned int var_12 = 1164898989U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)185;
unsigned long long int var_16 = 6055501892961078854ULL;
int zero = 0;
int var_18 = 1919853248;
long long int var_19 = 7776866829612428927LL;
int var_20 = -1150438852;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
