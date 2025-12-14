#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43047;
long long int var_11 = 2267029214978704591LL;
unsigned short var_15 = (unsigned short)6291;
int zero = 0;
short var_19 = (short)-10124;
unsigned short var_20 = (unsigned short)7937;
unsigned int var_21 = 3186831120U;
unsigned short var_22 = (unsigned short)44684;
unsigned char var_23 = (unsigned char)30;
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
