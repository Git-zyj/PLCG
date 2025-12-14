#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -880007178;
short var_4 = (short)21463;
unsigned char var_5 = (unsigned char)58;
unsigned char var_8 = (unsigned char)250;
unsigned char var_10 = (unsigned char)171;
int zero = 0;
int var_11 = -1543534132;
unsigned int var_12 = 3359905454U;
int var_13 = -1860420140;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
