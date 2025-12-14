#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
unsigned short var_3 = (unsigned short)38399;
short var_4 = (short)6922;
unsigned char var_5 = (unsigned char)58;
long long int var_6 = -5932112631080365910LL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)65185;
unsigned int var_10 = 3371320612U;
int zero = 0;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)71;
unsigned int var_13 = 642776772U;
unsigned long long int var_14 = 10310600741783612049ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
