#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6946325383891411980LL;
_Bool var_1 = (_Bool)0;
int var_6 = -826876329;
unsigned short var_7 = (unsigned short)64695;
unsigned long long int var_9 = 2653771378307922021ULL;
short var_11 = (short)-7313;
int zero = 0;
int var_18 = -421139994;
unsigned int var_19 = 4074432170U;
unsigned int var_20 = 58479270U;
unsigned char var_21 = (unsigned char)104;
void init() {
}

void checksum() {
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
