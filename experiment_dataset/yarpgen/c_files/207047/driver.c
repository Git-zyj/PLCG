#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16444;
unsigned char var_2 = (unsigned char)232;
unsigned int var_3 = 1888599835U;
unsigned short var_4 = (unsigned short)59264;
unsigned short var_5 = (unsigned short)15421;
unsigned short var_6 = (unsigned short)39016;
unsigned short var_8 = (unsigned short)37973;
unsigned long long int var_9 = 10146790293151254635ULL;
signed char var_11 = (signed char)38;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 419621388U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
