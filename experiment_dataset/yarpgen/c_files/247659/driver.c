#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8345724255933720880LL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)230;
unsigned int var_5 = 4095453741U;
short var_6 = (short)10032;
signed char var_7 = (signed char)9;
unsigned char var_8 = (unsigned char)105;
unsigned short var_9 = (unsigned short)63576;
unsigned char var_10 = (unsigned char)145;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)12629;
unsigned long long int var_13 = 11938204642911377219ULL;
short var_14 = (short)-24957;
unsigned char var_15 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
