#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)212;
signed char var_6 = (signed char)-4;
short var_8 = (short)19076;
signed char var_9 = (signed char)35;
unsigned long long int var_10 = 13324983890394177128ULL;
short var_16 = (short)-21943;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned char var_19 = (unsigned char)169;
signed char var_20 = (signed char)2;
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
