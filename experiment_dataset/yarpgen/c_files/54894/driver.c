#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
unsigned char var_2 = (unsigned char)205;
unsigned int var_3 = 2243116450U;
unsigned short var_4 = (unsigned short)34476;
int var_10 = 252840349;
unsigned short var_11 = (unsigned short)38883;
unsigned short var_13 = (unsigned short)25402;
unsigned char var_14 = (unsigned char)149;
unsigned short var_15 = (unsigned short)25284;
long long int var_18 = 5562169058014954033LL;
int zero = 0;
unsigned short var_20 = (unsigned short)31093;
signed char var_21 = (signed char)121;
short var_22 = (short)-23603;
short var_23 = (short)-7592;
unsigned long long int var_24 = 16198614549124436224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
