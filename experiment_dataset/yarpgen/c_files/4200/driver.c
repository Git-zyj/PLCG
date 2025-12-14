#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned char var_1 = (unsigned char)234;
unsigned char var_2 = (unsigned char)64;
unsigned long long int var_3 = 12507697594849508309ULL;
unsigned long long int var_5 = 3078907044062066109ULL;
unsigned char var_6 = (unsigned char)149;
int zero = 0;
unsigned short var_11 = (unsigned short)17167;
signed char var_12 = (signed char)-81;
short var_13 = (short)-24834;
short var_14 = (short)-28197;
unsigned char var_15 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
