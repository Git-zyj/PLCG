#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7505695415180274270LL;
unsigned int var_1 = 2014214851U;
unsigned int var_3 = 1474088034U;
long long int var_4 = 1078623351281638962LL;
unsigned short var_6 = (unsigned short)50295;
short var_7 = (short)-12371;
unsigned char var_8 = (unsigned char)240;
long long int var_9 = -5294233977743344107LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)11864;
unsigned long long int var_14 = 620736333773475030ULL;
unsigned int var_15 = 4137543298U;
unsigned short var_16 = (unsigned short)22916;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
