#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
_Bool var_2 = (_Bool)1;
long long int var_4 = 1807855153446573103LL;
long long int var_6 = 2802491892481826475LL;
short var_11 = (short)-18480;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)113;
unsigned short var_17 = (unsigned short)25662;
long long int var_18 = 8178153810133267831LL;
void init() {
}

void checksum() {
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
