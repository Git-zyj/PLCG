#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2751251837U;
unsigned long long int var_1 = 16822512623012277730ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)21191;
unsigned long long int var_7 = 8067022686305424225ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2590271650U;
unsigned long long int var_12 = 14952802551679990444ULL;
signed char var_13 = (signed char)18;
int zero = 0;
long long int var_16 = -1119404659249952127LL;
signed char var_17 = (signed char)-87;
unsigned short var_18 = (unsigned short)35998;
long long int var_19 = 5390296305680382029LL;
unsigned char var_20 = (unsigned char)80;
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
