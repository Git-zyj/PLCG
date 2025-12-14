#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4670521450636067120ULL;
short var_1 = (short)-23552;
unsigned long long int var_2 = 4510053381451657737ULL;
unsigned short var_4 = (unsigned short)21773;
int var_12 = -1123917611;
unsigned short var_14 = (unsigned short)42634;
unsigned long long int var_16 = 174198319367674295ULL;
unsigned long long int var_17 = 13132055034131634075ULL;
int zero = 0;
unsigned int var_19 = 3868184775U;
short var_20 = (short)-19009;
unsigned short var_21 = (unsigned short)46285;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
