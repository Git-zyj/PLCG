#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -390742862;
unsigned short var_2 = (unsigned short)2474;
unsigned short var_3 = (unsigned short)61587;
short var_4 = (short)16924;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-41;
short var_9 = (short)-16324;
signed char var_10 = (signed char)35;
short var_11 = (short)-26619;
int var_13 = 402121381;
signed char var_16 = (signed char)-35;
long long int var_19 = -4927745691737109814LL;
int zero = 0;
short var_20 = (short)25359;
unsigned int var_21 = 4153832695U;
unsigned char var_22 = (unsigned char)213;
void init() {
}

void checksum() {
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
