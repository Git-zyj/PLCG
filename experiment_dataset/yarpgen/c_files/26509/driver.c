#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2128076548;
int var_2 = 536628214;
int var_3 = 1243646735;
unsigned char var_4 = (unsigned char)134;
unsigned char var_6 = (unsigned char)140;
int var_11 = -1804227799;
unsigned long long int var_15 = 16623925813753668256ULL;
signed char var_17 = (signed char)-101;
int zero = 0;
unsigned int var_18 = 1267726155U;
unsigned int var_19 = 2558243064U;
signed char var_20 = (signed char)6;
signed char var_21 = (signed char)45;
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
