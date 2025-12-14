#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 152555825;
int var_1 = 31695651;
unsigned short var_2 = (unsigned short)17019;
unsigned char var_3 = (unsigned char)80;
int var_6 = -455716740;
unsigned char var_7 = (unsigned char)246;
unsigned long long int var_8 = 9018349149208804216ULL;
int var_9 = -1438580449;
int var_10 = 893488758;
unsigned char var_11 = (unsigned char)96;
unsigned char var_12 = (unsigned char)30;
unsigned short var_13 = (unsigned short)23121;
unsigned char var_14 = (unsigned char)123;
unsigned short var_15 = (unsigned short)56885;
int var_16 = 1211697067;
unsigned char var_17 = (unsigned char)241;
unsigned short var_18 = (unsigned short)50229;
unsigned long long int var_19 = 12070199868383530338ULL;
int zero = 0;
int var_20 = -1342198966;
unsigned long long int var_21 = 815413352862241217ULL;
int var_22 = -357228947;
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
