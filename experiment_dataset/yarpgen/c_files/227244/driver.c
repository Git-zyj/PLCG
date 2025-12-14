#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2101212006U;
signed char var_2 = (signed char)-103;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)59314;
signed char var_7 = (signed char)-98;
signed char var_8 = (signed char)120;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-17;
signed char var_12 = (signed char)-98;
unsigned int var_14 = 424688610U;
long long int var_15 = -742453417112599546LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_19 = -17524132;
signed char var_20 = (signed char)-116;
unsigned char var_21 = (unsigned char)126;
unsigned int var_22 = 1845712543U;
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
