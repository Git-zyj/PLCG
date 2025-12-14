#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1311358117;
unsigned char var_1 = (unsigned char)222;
unsigned char var_8 = (unsigned char)216;
unsigned short var_9 = (unsigned short)58145;
int zero = 0;
unsigned long long int var_10 = 17080582309687186973ULL;
short var_11 = (short)-20378;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
