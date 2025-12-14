#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = 5959177212022082644LL;
unsigned char var_6 = (unsigned char)203;
int var_8 = -1476902201;
int var_13 = -310541457;
unsigned long long int var_15 = 3031175364899567379ULL;
int zero = 0;
short var_17 = (short)10409;
unsigned short var_18 = (unsigned short)45416;
unsigned char var_19 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
