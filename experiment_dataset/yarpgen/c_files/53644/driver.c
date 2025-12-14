#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26320;
unsigned char var_2 = (unsigned char)19;
signed char var_12 = (signed char)55;
unsigned long long int var_13 = 6349371371239418228ULL;
unsigned int var_15 = 1402815806U;
short var_16 = (short)8507;
int zero = 0;
signed char var_18 = (signed char)-5;
signed char var_19 = (signed char)-30;
unsigned long long int var_20 = 17371724928614575874ULL;
unsigned char var_21 = (unsigned char)59;
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
