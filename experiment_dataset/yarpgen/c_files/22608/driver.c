#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24915;
unsigned short var_3 = (unsigned short)24684;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)88;
int var_10 = -304452609;
signed char var_11 = (signed char)-101;
unsigned char var_13 = (unsigned char)195;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned long long int var_15 = 16244145812471781744ULL;
unsigned int var_16 = 8829349U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
