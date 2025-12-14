#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25711;
unsigned int var_4 = 404188495U;
int var_6 = 1943718470;
unsigned int var_12 = 2303113418U;
signed char var_13 = (signed char)-94;
int zero = 0;
signed char var_17 = (signed char)119;
unsigned long long int var_18 = 2335453491420166194ULL;
short var_19 = (short)19021;
unsigned char var_20 = (unsigned char)30;
int var_21 = -298333067;
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
