#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2039981198;
short var_3 = (short)-30279;
signed char var_5 = (signed char)-107;
signed char var_6 = (signed char)94;
unsigned char var_10 = (unsigned char)252;
unsigned char var_12 = (unsigned char)54;
signed char var_13 = (signed char)77;
int zero = 0;
unsigned int var_18 = 1234027325U;
unsigned int var_19 = 2218812U;
int var_20 = 791106908;
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
