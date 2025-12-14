#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2018796435U;
unsigned long long int var_4 = 14462505939889397587ULL;
int var_5 = 1772731837;
int var_6 = 1662351527;
unsigned int var_9 = 1574060118U;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 3534405660U;
short var_15 = (short)-8650;
int var_17 = -1737755095;
int zero = 0;
int var_20 = 889851099;
unsigned short var_21 = (unsigned short)19116;
unsigned long long int var_22 = 386829641869166275ULL;
unsigned int var_23 = 3412951613U;
short var_24 = (short)11263;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
