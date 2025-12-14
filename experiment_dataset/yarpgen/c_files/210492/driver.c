#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6408;
signed char var_1 = (signed char)-49;
short var_2 = (short)-9511;
unsigned int var_3 = 2256999631U;
long long int var_4 = -4106083879857970464LL;
unsigned short var_5 = (unsigned short)9668;
int var_6 = -2049213264;
long long int var_7 = -7991115889149813701LL;
signed char var_8 = (signed char)-118;
unsigned short var_9 = (unsigned short)43911;
long long int var_10 = -4691635800019333317LL;
long long int var_11 = -8775569633892215384LL;
long long int var_12 = -6757873204112802018LL;
int zero = 0;
int var_13 = -767564329;
unsigned short var_14 = (unsigned short)27969;
signed char var_15 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
