#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
short var_3 = (short)11821;
_Bool var_4 = (_Bool)1;
int var_5 = 692560955;
unsigned int var_8 = 1139759410U;
unsigned long long int var_9 = 9796665814838491123ULL;
_Bool var_10 = (_Bool)0;
int var_12 = 825039271;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)32288;
int zero = 0;
long long int var_17 = 7677653774077350304LL;
long long int var_18 = -5685642026379970882LL;
unsigned int var_19 = 341051665U;
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
