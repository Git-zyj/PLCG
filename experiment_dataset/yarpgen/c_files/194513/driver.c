#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33221;
unsigned long long int var_4 = 4571527310124553549ULL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-42;
short var_9 = (short)-23896;
short var_12 = (short)2165;
short var_13 = (short)1290;
short var_17 = (short)30326;
signed char var_18 = (signed char)-98;
int zero = 0;
unsigned int var_19 = 907586796U;
long long int var_20 = -2259704485168440909LL;
short var_21 = (short)8647;
signed char var_22 = (signed char)117;
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
