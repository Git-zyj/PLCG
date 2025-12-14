#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2479682863590791991LL;
long long int var_1 = 8871789497075362904LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-22155;
unsigned short var_6 = (unsigned short)13178;
unsigned char var_9 = (unsigned char)61;
long long int var_11 = 7189794061435088100LL;
short var_12 = (short)10355;
int var_13 = 768021503;
int zero = 0;
short var_15 = (short)-2878;
short var_16 = (short)31078;
void init() {
}

void checksum() {
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
