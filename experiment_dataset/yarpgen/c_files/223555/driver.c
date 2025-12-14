#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3091598967757449834ULL;
unsigned char var_2 = (unsigned char)162;
short var_5 = (short)-9573;
unsigned char var_9 = (unsigned char)227;
unsigned int var_11 = 2109098768U;
unsigned long long int var_12 = 16008950775836424259ULL;
unsigned short var_13 = (unsigned short)43601;
int zero = 0;
short var_14 = (short)-29538;
unsigned int var_15 = 2607066228U;
signed char var_16 = (signed char)-52;
unsigned int var_17 = 1048317590U;
unsigned short var_18 = (unsigned short)3068;
int var_19 = -883399622;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
