#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25514;
short var_7 = (short)-12247;
signed char var_8 = (signed char)-106;
int zero = 0;
unsigned long long int var_11 = 15993794242581251663ULL;
signed char var_12 = (signed char)-6;
unsigned char var_13 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
