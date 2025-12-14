#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13973;
signed char var_3 = (signed char)-114;
int var_4 = -736882434;
signed char var_5 = (signed char)-59;
long long int var_9 = -6204572704903832214LL;
unsigned int var_10 = 2344419911U;
unsigned int var_11 = 1006494194U;
short var_12 = (short)8065;
signed char var_13 = (signed char)67;
short var_14 = (short)1769;
int var_17 = 2086699355;
short var_18 = (short)-4113;
int zero = 0;
short var_20 = (short)-25564;
unsigned short var_21 = (unsigned short)30281;
int var_22 = -331179324;
_Bool var_23 = (_Bool)0;
int var_24 = 386634814;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
