#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1122315933662908492LL;
signed char var_1 = (signed char)93;
int var_3 = -1776355400;
unsigned short var_5 = (unsigned short)63371;
short var_6 = (short)20021;
unsigned short var_7 = (unsigned short)47609;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
long long int var_11 = -6037848221743736065LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4833270926633326727LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
