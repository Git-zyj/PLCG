#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)63;
int var_5 = -1451753762;
long long int var_6 = 77870164089627140LL;
unsigned char var_7 = (unsigned char)179;
unsigned long long int var_8 = 920762519559013609ULL;
unsigned char var_9 = (unsigned char)232;
short var_10 = (short)-11660;
unsigned char var_11 = (unsigned char)62;
int var_12 = 40045935;
long long int var_13 = -5032923370129572400LL;
unsigned int var_14 = 580869790U;
unsigned int var_15 = 3799010738U;
int zero = 0;
unsigned long long int var_16 = 15752089376376013022ULL;
unsigned long long int var_17 = 7467941603749855128ULL;
signed char var_18 = (signed char)-83;
unsigned long long int var_19 = 8645537427192845874ULL;
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
