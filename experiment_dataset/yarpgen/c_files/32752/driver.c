#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1064749623542492937LL;
long long int var_1 = -3304585339447744284LL;
signed char var_2 = (signed char)105;
unsigned long long int var_4 = 13569486669818023185ULL;
unsigned short var_5 = (unsigned short)750;
int var_6 = 1523293358;
signed char var_7 = (signed char)-114;
long long int var_8 = 270930639550912886LL;
int var_11 = -119452864;
unsigned long long int var_12 = 10233681824018038683ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)21880;
signed char var_15 = (signed char)-29;
long long int var_16 = 7177916142024968849LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
