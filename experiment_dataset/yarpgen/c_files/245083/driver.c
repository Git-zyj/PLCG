#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61009;
int var_3 = -367664468;
unsigned int var_4 = 3499447498U;
unsigned int var_6 = 537047614U;
long long int var_7 = -2953262710851732124LL;
int zero = 0;
unsigned short var_14 = (unsigned short)2229;
_Bool var_15 = (_Bool)1;
int var_16 = -1441590850;
int var_17 = -1949041424;
unsigned long long int var_18 = 17914142778093740441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
