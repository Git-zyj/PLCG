#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3383;
int var_2 = -78335637;
signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_11 = 502481373847345537ULL;
unsigned int var_13 = 2958943185U;
short var_17 = (short)-17036;
unsigned short var_19 = (unsigned short)42682;
int zero = 0;
unsigned int var_20 = 2660907526U;
unsigned long long int var_21 = 1066619217084813886ULL;
signed char var_22 = (signed char)-44;
signed char var_23 = (signed char)-61;
signed char var_24 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
