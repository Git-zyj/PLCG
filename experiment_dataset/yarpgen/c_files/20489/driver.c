#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47678;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6943434066732883461ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 15363806558213931629ULL;
unsigned short var_5 = (unsigned short)16225;
unsigned long long int var_6 = 1642212054789553364ULL;
int var_7 = -1242415608;
unsigned short var_8 = (unsigned short)26480;
short var_10 = (short)-7354;
unsigned short var_12 = (unsigned short)6014;
int zero = 0;
unsigned short var_16 = (unsigned short)11578;
unsigned long long int var_17 = 190484733930806804ULL;
unsigned int var_18 = 2254964879U;
long long int var_19 = -7145451616317509690LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
