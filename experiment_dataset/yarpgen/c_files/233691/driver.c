#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)32;
unsigned long long int var_5 = 1492655535533504482ULL;
unsigned long long int var_6 = 13432951060750669612ULL;
signed char var_11 = (signed char)-69;
unsigned char var_14 = (unsigned char)5;
unsigned short var_19 = (unsigned short)36313;
int zero = 0;
unsigned char var_20 = (unsigned char)8;
unsigned long long int var_21 = 11542377364125348116ULL;
unsigned long long int var_22 = 274520687418341323ULL;
short var_23 = (short)-8659;
void init() {
}

void checksum() {
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
