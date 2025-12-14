#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32753;
unsigned int var_5 = 2740187200U;
unsigned char var_6 = (unsigned char)253;
long long int var_7 = 7429509249331102778LL;
short var_9 = (short)-24707;
int var_12 = 1452005642;
long long int var_14 = -2816669666280546940LL;
unsigned char var_16 = (unsigned char)58;
int zero = 0;
unsigned char var_17 = (unsigned char)121;
unsigned char var_18 = (unsigned char)71;
unsigned int var_19 = 3527643828U;
unsigned char var_20 = (unsigned char)233;
unsigned char var_21 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
