#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57116;
signed char var_6 = (signed char)-106;
unsigned char var_9 = (unsigned char)140;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
short var_11 = (short)-12382;
int var_12 = -1684033522;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
