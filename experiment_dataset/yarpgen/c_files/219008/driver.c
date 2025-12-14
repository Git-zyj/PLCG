#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1888426705U;
unsigned long long int var_1 = 9181294162017755122ULL;
long long int var_4 = 8789116766662639458LL;
int var_5 = 210234006;
unsigned short var_6 = (unsigned short)32948;
long long int var_9 = 5046854510519041195LL;
long long int var_11 = -6370085337568058223LL;
int zero = 0;
unsigned int var_16 = 1610592385U;
unsigned int var_17 = 3027533897U;
unsigned long long int var_18 = 2464927825103472514ULL;
void init() {
}

void checksum() {
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
