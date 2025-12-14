#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3730806529U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1309715617U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9876331441930825353ULL;
short var_9 = (short)-1352;
unsigned char var_10 = (unsigned char)105;
int var_11 = 896181489;
int zero = 0;
long long int var_16 = 2299647766730830291LL;
unsigned short var_17 = (unsigned short)3199;
int var_18 = 1554950698;
unsigned long long int var_19 = 15187791436710816927ULL;
unsigned int var_20 = 3998198624U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
