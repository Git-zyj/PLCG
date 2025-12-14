#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 975753500U;
unsigned short var_5 = (unsigned short)37949;
int var_8 = -1853684503;
unsigned short var_9 = (unsigned short)8272;
unsigned long long int var_13 = 4105835135700032997ULL;
short var_16 = (short)-6371;
int var_17 = 1378915256;
int zero = 0;
int var_18 = 1142563641;
unsigned short var_19 = (unsigned short)53406;
signed char var_20 = (signed char)52;
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
