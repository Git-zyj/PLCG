#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -6336166565631811226LL;
int var_4 = -579181683;
unsigned long long int var_7 = 9505007607943035791ULL;
unsigned short var_9 = (unsigned short)23621;
int zero = 0;
unsigned long long int var_10 = 9020207160391552184ULL;
unsigned int var_11 = 2832535922U;
int var_12 = -1439353534;
int var_13 = -1621465255;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
