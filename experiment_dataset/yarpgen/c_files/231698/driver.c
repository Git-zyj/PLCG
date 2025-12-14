#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11909;
int var_4 = -166845862;
unsigned char var_8 = (unsigned char)97;
unsigned int var_9 = 336387788U;
int zero = 0;
unsigned long long int var_10 = 14587142534188194533ULL;
int var_11 = 377565160;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
