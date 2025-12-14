#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
short var_2 = (short)23788;
unsigned long long int var_5 = 11469522937511751420ULL;
unsigned long long int var_6 = 10180831786390899697ULL;
unsigned long long int var_7 = 13665619178162900413ULL;
unsigned int var_9 = 3130684529U;
short var_15 = (short)-13549;
unsigned char var_17 = (unsigned char)24;
int zero = 0;
signed char var_18 = (signed char)15;
signed char var_19 = (signed char)-115;
unsigned char var_20 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
