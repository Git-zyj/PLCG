#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9795;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2038072273U;
signed char var_6 = (signed char)63;
long long int var_8 = 4530067867982617255LL;
unsigned long long int var_11 = 6498207320135080123ULL;
_Bool var_12 = (_Bool)0;
int var_15 = -1665564377;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 3696539522859551945ULL;
unsigned char var_19 = (unsigned char)207;
short var_20 = (short)678;
unsigned char var_21 = (unsigned char)75;
unsigned short var_22 = (unsigned short)45839;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
