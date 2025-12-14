#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5039889752228173073ULL;
int var_3 = 1025931527;
int var_5 = -1388282357;
unsigned int var_8 = 3625218748U;
int zero = 0;
int var_10 = -1798369227;
int var_11 = -69434351;
unsigned short var_12 = (unsigned short)30840;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
