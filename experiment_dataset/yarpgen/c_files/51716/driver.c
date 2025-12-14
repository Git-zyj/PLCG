#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10861;
unsigned char var_9 = (unsigned char)84;
signed char var_11 = (signed char)-116;
int zero = 0;
unsigned long long int var_16 = 17669304520283059454ULL;
unsigned short var_17 = (unsigned short)20611;
unsigned char var_18 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
