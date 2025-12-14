#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13223;
unsigned long long int var_10 = 5528275750618121577ULL;
signed char var_11 = (signed char)29;
short var_12 = (short)28541;
int var_15 = -50256319;
int zero = 0;
unsigned int var_17 = 204699058U;
signed char var_18 = (signed char)-111;
unsigned short var_19 = (unsigned short)60397;
int var_20 = -1341714867;
unsigned long long int var_21 = 13960635728468093784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
