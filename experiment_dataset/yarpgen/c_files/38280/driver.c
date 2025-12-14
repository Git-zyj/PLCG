#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 603014480;
unsigned int var_4 = 1515305175U;
unsigned char var_6 = (unsigned char)49;
unsigned short var_8 = (unsigned short)6890;
long long int var_9 = 5254486340914872500LL;
int zero = 0;
signed char var_10 = (signed char)10;
short var_11 = (short)-6833;
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
