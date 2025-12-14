#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-24;
short var_11 = (short)18243;
unsigned char var_12 = (unsigned char)237;
unsigned long long int var_13 = 4287679902988990462ULL;
long long int var_15 = -7320319931817585292LL;
long long int var_18 = 205687884523521823LL;
int zero = 0;
int var_20 = -89398341;
unsigned short var_21 = (unsigned short)56692;
unsigned short var_22 = (unsigned short)53881;
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
