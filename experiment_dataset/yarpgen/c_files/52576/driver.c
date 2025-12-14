#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53378;
unsigned int var_4 = 2959961750U;
signed char var_5 = (signed char)-80;
signed char var_6 = (signed char)41;
_Bool var_10 = (_Bool)1;
short var_11 = (short)21202;
int zero = 0;
unsigned long long int var_15 = 17984924620531659726ULL;
int var_16 = -1894756388;
int var_17 = -859652478;
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
