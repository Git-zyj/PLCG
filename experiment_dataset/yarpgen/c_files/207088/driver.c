#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2717072379U;
unsigned int var_5 = 3135387786U;
unsigned int var_7 = 1783246197U;
unsigned long long int var_10 = 1526856294442387218ULL;
unsigned short var_13 = (unsigned short)45905;
short var_14 = (short)-10214;
int zero = 0;
unsigned int var_15 = 550434641U;
signed char var_16 = (signed char)89;
unsigned long long int var_17 = 15074427311165290021ULL;
void init() {
}

void checksum() {
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
