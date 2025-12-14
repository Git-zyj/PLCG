#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5657958431423556226ULL;
signed char var_6 = (signed char)-96;
unsigned long long int var_9 = 4656908851414696064ULL;
unsigned long long int var_11 = 12224383863555684828ULL;
unsigned long long int var_15 = 16018042953735320033ULL;
short var_16 = (short)26370;
int zero = 0;
unsigned long long int var_20 = 10445344809252833546ULL;
unsigned short var_21 = (unsigned short)42407;
unsigned short var_22 = (unsigned short)55466;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
