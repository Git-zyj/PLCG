#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2355784959506382745ULL;
unsigned short var_8 = (unsigned short)17207;
short var_10 = (short)22651;
unsigned long long int var_11 = 14375267623155395827ULL;
unsigned long long int var_14 = 13280035142924241040ULL;
unsigned long long int var_15 = 7654693190216815961ULL;
int zero = 0;
unsigned long long int var_16 = 15250541872913780827ULL;
unsigned int var_17 = 2047504638U;
short var_18 = (short)-17096;
unsigned long long int var_19 = 4780446832684609722ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
