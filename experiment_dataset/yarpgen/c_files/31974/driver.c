#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5144191303093959211ULL;
unsigned short var_1 = (unsigned short)19448;
unsigned int var_3 = 3531677771U;
signed char var_5 = (signed char)119;
int var_6 = 1356653934;
signed char var_8 = (signed char)-36;
unsigned char var_11 = (unsigned char)59;
unsigned short var_14 = (unsigned short)13438;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
signed char var_18 = (signed char)-17;
long long int var_19 = -4564913351280081526LL;
short var_20 = (short)-19122;
unsigned short var_21 = (unsigned short)11766;
void init() {
}

void checksum() {
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
