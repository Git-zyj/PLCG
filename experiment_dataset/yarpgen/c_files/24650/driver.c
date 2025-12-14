#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27298;
short var_3 = (short)-25333;
short var_4 = (short)23056;
int var_9 = 2053421992;
long long int var_12 = 7836173437962074945LL;
unsigned char var_16 = (unsigned char)36;
unsigned char var_17 = (unsigned char)75;
int zero = 0;
signed char var_20 = (signed char)58;
signed char var_21 = (signed char)11;
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
