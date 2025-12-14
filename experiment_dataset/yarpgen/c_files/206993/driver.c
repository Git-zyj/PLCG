#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2358143516U;
long long int var_3 = 107360023381319878LL;
int var_4 = 1159919010;
signed char var_5 = (signed char)-115;
unsigned int var_7 = 1754739448U;
signed char var_9 = (signed char)-86;
int var_10 = 530138474;
unsigned int var_11 = 930594918U;
short var_13 = (short)7452;
int zero = 0;
unsigned short var_14 = (unsigned short)59315;
unsigned char var_15 = (unsigned char)160;
unsigned long long int var_16 = 11132698245427248203ULL;
signed char var_17 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
