#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
short var_1 = (short)22947;
unsigned int var_5 = 3334598078U;
unsigned char var_8 = (unsigned char)218;
unsigned long long int var_13 = 14859108886012578909ULL;
short var_17 = (short)-13028;
signed char var_18 = (signed char)119;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)56;
signed char var_21 = (signed char)-17;
unsigned long long int var_22 = 11121153695518327497ULL;
short var_23 = (short)-20475;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
