#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3205908293U;
signed char var_1 = (signed char)111;
unsigned char var_2 = (unsigned char)248;
unsigned int var_3 = 1901816364U;
signed char var_4 = (signed char)56;
short var_5 = (short)16881;
signed char var_6 = (signed char)65;
unsigned long long int var_7 = 15806109576881894554ULL;
unsigned int var_8 = 1614283811U;
unsigned int var_9 = 1288592766U;
unsigned long long int var_10 = 2398407385268473240ULL;
unsigned short var_11 = (unsigned short)58502;
long long int var_12 = 7139883713837169946LL;
signed char var_13 = (signed char)115;
int zero = 0;
unsigned char var_14 = (unsigned char)140;
signed char var_15 = (signed char)-32;
unsigned long long int var_16 = 16613590980064012928ULL;
long long int var_17 = -8188890234438958093LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
