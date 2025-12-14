#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9827438452093258555ULL;
unsigned long long int var_5 = 2335338133881644004ULL;
unsigned long long int var_8 = 10173394306345349775ULL;
signed char var_12 = (signed char)-75;
long long int var_14 = 1591612023171529136LL;
int zero = 0;
unsigned int var_16 = 3160208497U;
short var_17 = (short)-9254;
unsigned short var_18 = (unsigned short)31098;
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
