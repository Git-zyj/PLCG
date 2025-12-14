#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 167675889U;
unsigned short var_4 = (unsigned short)13356;
unsigned short var_6 = (unsigned short)2430;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)5053;
unsigned long long int var_11 = 11194686615864401978ULL;
int var_12 = -1539579299;
int var_13 = 2104835083;
short var_14 = (short)2706;
short var_15 = (short)-31703;
unsigned short var_16 = (unsigned short)37810;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 185834350;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
