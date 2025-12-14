#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -884886243823148788LL;
int var_2 = -708225323;
unsigned long long int var_12 = 4664323150950656161ULL;
short var_13 = (short)5485;
unsigned short var_14 = (unsigned short)37945;
int zero = 0;
unsigned int var_16 = 2004622726U;
unsigned long long int var_17 = 3324253099711532046ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
