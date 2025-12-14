#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3013933792U;
unsigned long long int var_3 = 16098616282060206977ULL;
unsigned short var_7 = (unsigned short)34507;
short var_8 = (short)-7150;
short var_9 = (short)12508;
unsigned long long int var_11 = 279870307046312109ULL;
signed char var_15 = (signed char)-60;
unsigned char var_16 = (unsigned char)66;
unsigned short var_17 = (unsigned short)56629;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8399280173276123339ULL;
short var_20 = (short)-22066;
void init() {
}

void checksum() {
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
