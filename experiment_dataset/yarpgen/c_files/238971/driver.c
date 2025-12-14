#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3869556151755392923ULL;
signed char var_4 = (signed char)-92;
unsigned long long int var_7 = 4096597367188363371ULL;
unsigned int var_11 = 3241666060U;
long long int var_13 = -4545065021161081342LL;
int zero = 0;
int var_14 = 1514513075;
long long int var_15 = 3079443946892617583LL;
unsigned long long int var_16 = 11430909604317956056ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
