#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3335048710U;
int var_3 = 1381600499;
unsigned char var_4 = (unsigned char)179;
unsigned long long int var_6 = 15023942584866396718ULL;
short var_10 = (short)26115;
signed char var_11 = (signed char)-97;
short var_14 = (short)11870;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
unsigned int var_16 = 3340731534U;
int var_17 = 387593902;
unsigned long long int var_18 = 3871753672236469213ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
