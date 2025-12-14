#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13891444696445425103ULL;
short var_2 = (short)-24383;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = 4963991409966192761LL;
unsigned int var_10 = 3388353199U;
unsigned short var_11 = (unsigned short)65519;
int var_13 = -1807960740;
short var_16 = (short)-31725;
int zero = 0;
int var_17 = 1250759879;
signed char var_18 = (signed char)-124;
_Bool var_19 = (_Bool)0;
int var_20 = 960736937;
void init() {
}

void checksum() {
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
