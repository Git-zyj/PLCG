#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1015870597;
signed char var_2 = (signed char)28;
signed char var_4 = (signed char)92;
unsigned long long int var_6 = 9566560582827733365ULL;
short var_9 = (short)-16918;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 6762658333711829244ULL;
int var_13 = -1959497948;
int var_14 = 1660195214;
unsigned short var_15 = (unsigned short)1730;
int var_16 = -2011657387;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
