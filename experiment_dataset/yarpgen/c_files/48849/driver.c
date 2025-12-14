#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)2689;
unsigned long long int var_3 = 8414699483284084562ULL;
unsigned long long int var_4 = 2116315076195526061ULL;
short var_5 = (short)-10059;
unsigned char var_8 = (unsigned char)189;
unsigned long long int var_9 = 16577236038932923662ULL;
int zero = 0;
unsigned long long int var_13 = 16049277429299507420ULL;
long long int var_14 = 8403538008440942875LL;
unsigned long long int var_15 = 3458796780315596961ULL;
short var_16 = (short)6173;
long long int var_17 = -5666240434710779294LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
