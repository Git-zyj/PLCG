#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11387;
short var_6 = (short)-17703;
unsigned long long int var_9 = 14567987832515715631ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
unsigned long long int var_14 = 2241902033146472642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
