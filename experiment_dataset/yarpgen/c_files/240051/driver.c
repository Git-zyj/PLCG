#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7197214480633480044LL;
unsigned short var_4 = (unsigned short)59148;
unsigned short var_8 = (unsigned short)17556;
unsigned char var_9 = (unsigned char)17;
short var_11 = (short)3618;
long long int var_13 = 9018417584607764930LL;
int zero = 0;
unsigned char var_15 = (unsigned char)151;
unsigned char var_16 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
