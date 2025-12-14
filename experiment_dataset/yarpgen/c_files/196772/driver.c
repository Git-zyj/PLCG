#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25576;
unsigned int var_4 = 3052290517U;
unsigned int var_9 = 880201468U;
unsigned short var_10 = (unsigned short)35597;
unsigned short var_11 = (unsigned short)2821;
unsigned long long int var_12 = 14150341433581940383ULL;
short var_14 = (short)-23075;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)17615;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
