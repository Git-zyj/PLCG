#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned char var_2 = (unsigned char)164;
unsigned long long int var_5 = 4875276873374644092ULL;
short var_9 = (short)-7376;
signed char var_11 = (signed char)24;
long long int var_12 = 1956050122881508174LL;
unsigned char var_14 = (unsigned char)116;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned char var_18 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
