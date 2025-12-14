#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -7313959918857218654LL;
short var_3 = (short)11773;
unsigned int var_4 = 279665943U;
unsigned long long int var_5 = 5525538666639090953ULL;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned int var_10 = 3883746918U;
short var_11 = (short)19534;
long long int var_12 = -5549631352418095131LL;
short var_13 = (short)5467;
unsigned long long int var_14 = 18281326333124015639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
