#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1372970006638314086LL;
unsigned char var_2 = (unsigned char)233;
unsigned char var_3 = (unsigned char)3;
unsigned int var_9 = 2631179914U;
unsigned int var_10 = 3141096064U;
unsigned short var_14 = (unsigned short)24299;
signed char var_17 = (signed char)0;
int zero = 0;
unsigned int var_19 = 1052316520U;
long long int var_20 = 1786288260753668407LL;
unsigned char var_21 = (unsigned char)197;
unsigned char var_22 = (unsigned char)108;
unsigned short var_23 = (unsigned short)34233;
void init() {
}

void checksum() {
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
