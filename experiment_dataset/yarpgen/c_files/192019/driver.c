#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4841247946815101310LL;
unsigned short var_2 = (unsigned short)37538;
long long int var_4 = -1746562247024044238LL;
unsigned short var_5 = (unsigned short)61474;
unsigned short var_8 = (unsigned short)23259;
unsigned short var_10 = (unsigned short)57839;
unsigned short var_11 = (unsigned short)36225;
unsigned short var_12 = (unsigned short)17543;
long long int var_14 = 9210778964209785057LL;
unsigned int var_15 = 1645995339U;
unsigned short var_16 = (unsigned short)11827;
long long int var_17 = 9031331257880791165LL;
int zero = 0;
short var_19 = (short)-14597;
long long int var_20 = -8669994910427977940LL;
short var_21 = (short)26859;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
