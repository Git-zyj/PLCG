#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = 1567069274;
unsigned short var_7 = (unsigned short)56114;
signed char var_10 = (signed char)22;
unsigned short var_11 = (unsigned short)9257;
int zero = 0;
int var_14 = -895099130;
signed char var_15 = (signed char)109;
unsigned int var_16 = 4012927376U;
long long int var_17 = -4060802094704463334LL;
signed char var_18 = (signed char)-73;
unsigned long long int var_19 = 1943127294432042097ULL;
unsigned long long int var_20 = 11400936366869018861ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
