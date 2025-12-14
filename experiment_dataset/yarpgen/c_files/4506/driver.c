#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26695;
long long int var_2 = -5884396883383594645LL;
signed char var_3 = (signed char)-81;
int var_4 = 1260677886;
long long int var_5 = 1135367240074004060LL;
long long int var_6 = 5578927685504058362LL;
unsigned short var_7 = (unsigned short)38727;
unsigned char var_8 = (unsigned char)149;
unsigned char var_9 = (unsigned char)28;
unsigned short var_10 = (unsigned short)34230;
unsigned short var_11 = (unsigned short)29025;
long long int var_12 = -2636100148026052579LL;
unsigned char var_13 = (unsigned char)211;
int zero = 0;
unsigned long long int var_14 = 17257323843019609303ULL;
unsigned char var_15 = (unsigned char)205;
long long int var_16 = -6785020039451649147LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
