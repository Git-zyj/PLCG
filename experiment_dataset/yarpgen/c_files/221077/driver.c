#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 762349075U;
unsigned short var_1 = (unsigned short)57087;
unsigned short var_6 = (unsigned short)51914;
unsigned short var_7 = (unsigned short)2889;
int var_11 = 520867093;
int var_12 = 1946624127;
int zero = 0;
signed char var_15 = (signed char)-76;
long long int var_16 = 5285497405122169322LL;
unsigned long long int var_17 = 5439845181484979449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
