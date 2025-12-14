#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1592103105U;
unsigned short var_8 = (unsigned short)34510;
long long int var_9 = 1704181135988242434LL;
unsigned long long int var_14 = 3164223694492822422ULL;
unsigned short var_15 = (unsigned short)10770;
signed char var_17 = (signed char)-113;
int zero = 0;
short var_18 = (short)-32062;
signed char var_19 = (signed char)-57;
unsigned short var_20 = (unsigned short)61212;
short var_21 = (short)-5173;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
