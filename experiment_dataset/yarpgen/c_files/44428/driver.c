#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
unsigned long long int var_2 = 3368417268185600531ULL;
unsigned int var_5 = 2701457540U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)57;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2009813430743005448ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)116;
unsigned short var_17 = (unsigned short)46246;
long long int var_18 = -301769731213109587LL;
unsigned long long int var_19 = 6546190467585993848ULL;
short var_20 = (short)-26506;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
