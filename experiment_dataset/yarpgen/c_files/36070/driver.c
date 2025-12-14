#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3168156060U;
unsigned long long int var_3 = 12897858974490426141ULL;
int var_4 = 179890212;
unsigned int var_5 = 334491496U;
int var_6 = 2006456905;
unsigned long long int var_7 = 4635134377541632813ULL;
short var_8 = (short)-13061;
signed char var_9 = (signed char)76;
long long int var_10 = -3163614062865807587LL;
long long int var_11 = 4231982051933279167LL;
signed char var_12 = (signed char)-68;
unsigned long long int var_15 = 15234591895040006671ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7975;
unsigned short var_18 = (unsigned short)22537;
unsigned short var_19 = (unsigned short)34239;
short var_20 = (short)-12731;
void init() {
}

void checksum() {
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
