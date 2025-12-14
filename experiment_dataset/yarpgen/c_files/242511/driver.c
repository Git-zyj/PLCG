#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26221;
signed char var_2 = (signed char)119;
unsigned long long int var_6 = 5279102059743357189ULL;
unsigned long long int var_8 = 13260256196436943907ULL;
signed char var_11 = (signed char)-126;
signed char var_12 = (signed char)-53;
long long int var_13 = 5005221069334085367LL;
int zero = 0;
unsigned int var_15 = 3442134718U;
unsigned char var_16 = (unsigned char)45;
unsigned short var_17 = (unsigned short)44048;
unsigned int var_18 = 2016041194U;
unsigned short var_19 = (unsigned short)23307;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
