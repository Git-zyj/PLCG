#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 859422442638828571ULL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-25790;
signed char var_10 = (signed char)-90;
unsigned int var_11 = 2564928005U;
unsigned long long int var_13 = 10137566893039899934ULL;
unsigned short var_15 = (unsigned short)34494;
short var_16 = (short)-24763;
unsigned long long int var_17 = 5805178424984260235ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
unsigned long long int var_19 = 4582114885360077775ULL;
unsigned int var_20 = 3106565545U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
