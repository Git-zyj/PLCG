#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 3403082225413171012ULL;
short var_12 = (short)-3935;
unsigned char var_14 = (unsigned char)145;
int zero = 0;
unsigned long long int var_17 = 15183477300760954780ULL;
unsigned short var_18 = (unsigned short)31496;
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
