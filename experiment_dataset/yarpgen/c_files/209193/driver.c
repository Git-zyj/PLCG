#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1114523030;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)54016;
int var_9 = -781355658;
int zero = 0;
unsigned int var_13 = 2546920769U;
short var_14 = (short)23047;
long long int var_15 = -334626373134362159LL;
unsigned int var_16 = 3802753164U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
