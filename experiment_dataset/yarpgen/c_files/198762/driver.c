#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3454007593U;
signed char var_2 = (signed char)-22;
short var_3 = (short)-19600;
int var_4 = 434574688;
unsigned char var_6 = (unsigned char)55;
unsigned short var_7 = (unsigned short)4498;
signed char var_8 = (signed char)-111;
unsigned short var_9 = (unsigned short)36766;
long long int var_11 = -7017107889138810232LL;
int zero = 0;
unsigned int var_12 = 914270805U;
_Bool var_13 = (_Bool)1;
int var_14 = 1612041146;
long long int var_15 = -1249633354238015816LL;
_Bool var_16 = (_Bool)1;
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
