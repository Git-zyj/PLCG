#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_2 = 1495269026;
unsigned short var_4 = (unsigned short)61949;
int var_5 = 1167906299;
signed char var_6 = (signed char)120;
short var_8 = (short)-5093;
short var_9 = (short)7825;
short var_11 = (short)-25255;
short var_12 = (short)-2186;
short var_13 = (short)-24790;
int zero = 0;
int var_14 = -263331813;
signed char var_15 = (signed char)6;
void init() {
}

void checksum() {
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
