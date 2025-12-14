#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)178;
int var_3 = -1543955692;
unsigned int var_5 = 766454571U;
int var_6 = -486908081;
short var_7 = (short)-31301;
unsigned long long int var_8 = 2644075746295965132ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)19075;
int zero = 0;
signed char var_11 = (signed char)39;
signed char var_12 = (signed char)122;
unsigned long long int var_13 = 2704840553160886389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
