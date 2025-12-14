#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)62798;
unsigned int var_3 = 3728111037U;
unsigned int var_4 = 3996215936U;
unsigned char var_8 = (unsigned char)231;
unsigned char var_9 = (unsigned char)113;
unsigned int var_10 = 3769908654U;
short var_11 = (short)3571;
unsigned int var_12 = 4128955524U;
signed char var_13 = (signed char)117;
unsigned int var_16 = 1525930339U;
int zero = 0;
long long int var_17 = 7533643575983993481LL;
unsigned int var_18 = 4009281484U;
unsigned int var_19 = 2153791663U;
unsigned char var_20 = (unsigned char)58;
short var_21 = (short)-1961;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
