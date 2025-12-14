#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15659;
short var_5 = (short)23715;
unsigned char var_9 = (unsigned char)251;
unsigned long long int var_14 = 12953493555353192521ULL;
int zero = 0;
short var_20 = (short)-8525;
unsigned long long int var_21 = 6736225750393856759ULL;
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
