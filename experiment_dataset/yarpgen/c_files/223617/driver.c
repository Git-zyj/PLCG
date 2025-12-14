#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1665295287054055420LL;
unsigned short var_1 = (unsigned short)40055;
unsigned long long int var_2 = 3032839377973624191ULL;
unsigned int var_6 = 134951950U;
short var_7 = (short)22265;
long long int var_8 = -7847846361655468857LL;
int var_10 = -1004927202;
unsigned char var_11 = (unsigned char)247;
unsigned char var_12 = (unsigned char)40;
long long int var_14 = -1401294167540083755LL;
int zero = 0;
unsigned short var_15 = (unsigned short)34920;
short var_16 = (short)-22004;
int var_17 = 619546939;
void init() {
}

void checksum() {
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
