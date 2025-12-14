#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_1 = 6772188774684516837LL;
unsigned int var_5 = 2256690294U;
unsigned int var_6 = 118209408U;
unsigned int var_7 = 3416194904U;
int var_8 = 2098223479;
short var_12 = (short)7678;
int zero = 0;
unsigned char var_20 = (unsigned char)101;
int var_21 = -845682200;
int var_22 = -597699045;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
