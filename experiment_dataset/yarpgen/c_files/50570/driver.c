#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
short var_4 = (short)65;
int var_6 = 1316151344;
unsigned int var_11 = 2827498631U;
unsigned int var_12 = 1395194768U;
signed char var_13 = (signed char)86;
signed char var_14 = (signed char)-29;
unsigned int var_15 = 1351466259U;
int zero = 0;
unsigned char var_16 = (unsigned char)74;
short var_17 = (short)-7262;
unsigned long long int var_18 = 6658616422684372871ULL;
unsigned char var_19 = (unsigned char)92;
void init() {
}

void checksum() {
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
