#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9979191314883876441ULL;
signed char var_4 = (signed char)-17;
unsigned short var_6 = (unsigned short)7916;
unsigned long long int var_7 = 17997280394287443933ULL;
int var_11 = -932971637;
unsigned short var_13 = (unsigned short)12115;
int zero = 0;
unsigned long long int var_14 = 2694014619892832832ULL;
long long int var_15 = -8310163386242290129LL;
signed char var_16 = (signed char)-83;
unsigned short var_17 = (unsigned short)54655;
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
