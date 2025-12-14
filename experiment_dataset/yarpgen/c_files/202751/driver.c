#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1115817147;
_Bool var_1 = (_Bool)1;
short var_3 = (short)13796;
unsigned char var_6 = (unsigned char)16;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1855800394U;
unsigned int var_10 = 877478375U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 1159691712288886280ULL;
short var_13 = (short)9933;
short var_15 = (short)-17596;
int zero = 0;
long long int var_16 = 1464449765894791575LL;
unsigned int var_17 = 628317073U;
unsigned char var_18 = (unsigned char)90;
unsigned char var_19 = (unsigned char)95;
unsigned long long int var_20 = 8408743154186063575ULL;
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
