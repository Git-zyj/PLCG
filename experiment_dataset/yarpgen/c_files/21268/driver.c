#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned char var_2 = (unsigned char)174;
unsigned int var_3 = 215248579U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)30050;
int var_6 = -836086501;
signed char var_7 = (signed char)-15;
unsigned int var_8 = 1620736627U;
short var_9 = (short)19437;
short var_10 = (short)-30516;
int zero = 0;
unsigned short var_11 = (unsigned short)39536;
int var_12 = 1208102793;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
