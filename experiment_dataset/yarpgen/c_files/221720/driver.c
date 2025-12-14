#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44181;
signed char var_2 = (signed char)-92;
unsigned short var_4 = (unsigned short)56681;
short var_5 = (short)27100;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-33;
long long int var_9 = 5445416916412933982LL;
unsigned char var_10 = (unsigned char)28;
long long int var_11 = -3178526491134644547LL;
long long int var_12 = -4767733110251590912LL;
unsigned int var_14 = 2723260083U;
unsigned short var_15 = (unsigned short)42662;
long long int var_16 = 4227767777750077614LL;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
unsigned char var_18 = (unsigned char)17;
unsigned char var_19 = (unsigned char)192;
unsigned char var_20 = (unsigned char)4;
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
