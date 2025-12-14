#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3905401689576356306LL;
signed char var_4 = (signed char)70;
signed char var_9 = (signed char)81;
long long int var_10 = 8145613663251907834LL;
unsigned char var_13 = (unsigned char)205;
signed char var_18 = (signed char)65;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)47531;
short var_21 = (short)-11924;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
