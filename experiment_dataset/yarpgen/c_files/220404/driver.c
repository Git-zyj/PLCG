#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15280356125921197473ULL;
signed char var_2 = (signed char)-47;
signed char var_3 = (signed char)-36;
int var_4 = -939802264;
unsigned short var_6 = (unsigned short)41951;
int var_8 = 1620506538;
unsigned int var_10 = 3702551254U;
int zero = 0;
unsigned int var_11 = 1237538796U;
unsigned char var_12 = (unsigned char)211;
unsigned char var_13 = (unsigned char)19;
short var_14 = (short)-13373;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
