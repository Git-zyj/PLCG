#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4064951208856605101LL;
signed char var_1 = (signed char)-5;
unsigned char var_2 = (unsigned char)171;
short var_4 = (short)12037;
signed char var_5 = (signed char)-45;
unsigned short var_6 = (unsigned short)32783;
short var_7 = (short)-17830;
long long int var_9 = 8863354626458160181LL;
short var_11 = (short)-24205;
unsigned long long int var_12 = 7386256079976232668ULL;
unsigned short var_13 = (unsigned short)5711;
int zero = 0;
long long int var_14 = 497358076063431860LL;
long long int var_15 = -6260110373953303720LL;
long long int var_16 = -3463395660635286864LL;
unsigned int var_17 = 562246421U;
long long int var_18 = 2645697574800914430LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
