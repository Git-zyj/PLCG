#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2134852076;
int var_7 = 410060651;
unsigned char var_8 = (unsigned char)240;
unsigned long long int var_13 = 15300845511085407363ULL;
signed char var_14 = (signed char)74;
int zero = 0;
unsigned char var_18 = (unsigned char)45;
unsigned char var_19 = (unsigned char)102;
unsigned long long int var_20 = 7112495960590102668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
