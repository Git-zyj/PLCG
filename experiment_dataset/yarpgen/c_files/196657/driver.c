#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1802428540;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1710058562165117107ULL;
unsigned short var_9 = (unsigned short)64360;
short var_10 = (short)-12397;
unsigned char var_11 = (unsigned char)105;
signed char var_12 = (signed char)-90;
unsigned char var_13 = (unsigned char)253;
unsigned int var_16 = 2875484921U;
int zero = 0;
short var_18 = (short)-17580;
unsigned int var_19 = 2748790656U;
unsigned char var_20 = (unsigned char)254;
void init() {
}

void checksum() {
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
