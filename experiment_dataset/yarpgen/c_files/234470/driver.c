#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22691;
unsigned int var_3 = 757527174U;
long long int var_4 = 434227596099336474LL;
unsigned short var_10 = (unsigned short)57710;
int zero = 0;
unsigned int var_17 = 3053992679U;
int var_18 = 1688619641;
unsigned int var_19 = 1246482490U;
unsigned short var_20 = (unsigned short)46444;
int var_21 = 409727429;
unsigned char var_22 = (unsigned char)69;
unsigned int var_23 = 2407907601U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
