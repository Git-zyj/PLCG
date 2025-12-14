#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3084745439U;
unsigned char var_9 = (unsigned char)152;
unsigned int var_11 = 874058357U;
long long int var_13 = -7869334165807124328LL;
signed char var_16 = (signed char)97;
unsigned int var_17 = 3440067435U;
int zero = 0;
signed char var_20 = (signed char)85;
unsigned int var_21 = 3023995281U;
void init() {
}

void checksum() {
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
