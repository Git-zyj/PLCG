#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12175;
unsigned char var_4 = (unsigned char)171;
unsigned long long int var_6 = 10732724444651924516ULL;
int zero = 0;
unsigned long long int var_16 = 8738904630291289850ULL;
long long int var_17 = 3234239344152995335LL;
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
