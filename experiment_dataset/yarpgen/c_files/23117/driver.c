#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
unsigned short var_6 = (unsigned short)38395;
unsigned long long int var_7 = 14958861874311652968ULL;
unsigned long long int var_8 = 12189552729287620569ULL;
long long int var_9 = -1161748810845177877LL;
unsigned int var_11 = 3056016570U;
unsigned short var_13 = (unsigned short)35922;
int var_14 = 2017400388;
unsigned int var_15 = 2919662004U;
int var_18 = -766153434;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
_Bool var_20 = (_Bool)0;
int var_21 = 856639803;
short var_22 = (short)-2452;
void init() {
}

void checksum() {
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
