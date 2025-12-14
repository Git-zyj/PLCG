#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2005589709;
unsigned char var_2 = (unsigned char)116;
unsigned long long int var_3 = 17604986481220713398ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)13823;
unsigned char var_9 = (unsigned char)181;
unsigned char var_12 = (unsigned char)152;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_15 = -6243141096076632867LL;
_Bool var_16 = (_Bool)1;
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
