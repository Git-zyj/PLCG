#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9503530674282756336ULL;
unsigned int var_3 = 3025316773U;
unsigned int var_7 = 394123408U;
unsigned short var_8 = (unsigned short)6668;
short var_9 = (short)-9427;
short var_10 = (short)13976;
int zero = 0;
unsigned int var_11 = 1203867798U;
unsigned long long int var_12 = 18303277603448514638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
