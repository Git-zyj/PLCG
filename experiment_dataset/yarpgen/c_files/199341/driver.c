#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
long long int var_3 = 417921294624577853LL;
unsigned long long int var_5 = 844612499180651511ULL;
unsigned short var_7 = (unsigned short)45733;
int var_8 = 272515080;
int var_10 = 558192431;
unsigned int var_13 = 1044907932U;
long long int var_15 = 6349416913885824889LL;
int zero = 0;
int var_17 = -1106831531;
int var_18 = 512507169;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
