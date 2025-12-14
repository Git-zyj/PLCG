#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
unsigned int var_4 = 3555203941U;
unsigned int var_5 = 519984216U;
unsigned char var_6 = (unsigned char)142;
signed char var_9 = (signed char)31;
short var_11 = (short)-7515;
long long int var_12 = 7739863885140641986LL;
unsigned char var_13 = (unsigned char)200;
int var_14 = 352260683;
signed char var_15 = (signed char)-100;
int var_16 = 939458834;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2338615765990714090ULL;
long long int var_19 = 7743767711546585198LL;
short var_20 = (short)3389;
unsigned char var_21 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
