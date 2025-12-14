#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -770727729693938347LL;
long long int var_1 = -2667602596203097444LL;
unsigned short var_2 = (unsigned short)35149;
signed char var_3 = (signed char)106;
signed char var_4 = (signed char)39;
unsigned short var_5 = (unsigned short)6364;
unsigned short var_6 = (unsigned short)15563;
int var_7 = 24796605;
int var_8 = -1035759530;
unsigned char var_9 = (unsigned char)253;
int var_10 = 1033379051;
unsigned int var_12 = 1085234545U;
int var_13 = -487630490;
unsigned short var_14 = (unsigned short)34127;
long long int var_15 = -8545950919616633700LL;
short var_16 = (short)-21608;
signed char var_17 = (signed char)-123;
unsigned char var_18 = (unsigned char)134;
unsigned short var_19 = (unsigned short)35247;
int zero = 0;
unsigned char var_20 = (unsigned char)199;
unsigned long long int var_21 = 4955960248237352473ULL;
unsigned int var_22 = 4186590760U;
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
