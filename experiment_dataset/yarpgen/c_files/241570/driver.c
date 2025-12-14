#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1422991895U;
short var_2 = (short)-7860;
int var_3 = -1287321991;
unsigned long long int var_5 = 1942805379456761005ULL;
long long int var_6 = 7743481765187760890LL;
int var_7 = -236879632;
unsigned long long int var_8 = 13337514278148058814ULL;
short var_10 = (short)22424;
unsigned short var_11 = (unsigned short)21297;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = -3034069218886498165LL;
short var_16 = (short)-8143;
unsigned int var_17 = 2315809676U;
signed char var_18 = (signed char)-61;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)125;
signed char var_21 = (signed char)39;
unsigned char var_22 = (unsigned char)109;
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
