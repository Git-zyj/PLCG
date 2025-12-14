#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54284;
unsigned long long int var_1 = 11611022215506863472ULL;
unsigned int var_6 = 4253988213U;
long long int var_7 = 7410966322908903689LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-31396;
int var_12 = 816429138;
unsigned int var_13 = 2495537552U;
int zero = 0;
unsigned char var_15 = (unsigned char)113;
unsigned short var_16 = (unsigned short)53740;
void init() {
}

void checksum() {
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
