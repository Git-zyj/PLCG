#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2496;
short var_3 = (short)-1969;
unsigned int var_4 = 1083966887U;
long long int var_5 = 6531698266273158606LL;
unsigned long long int var_6 = 10994962674507125881ULL;
long long int var_7 = 119623013571737192LL;
unsigned short var_8 = (unsigned short)47942;
unsigned char var_9 = (unsigned char)133;
unsigned char var_10 = (unsigned char)54;
signed char var_11 = (signed char)-30;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)14;
unsigned char var_17 = (unsigned char)196;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
