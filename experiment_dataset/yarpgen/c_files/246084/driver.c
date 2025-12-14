#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
unsigned char var_5 = (unsigned char)191;
unsigned char var_8 = (unsigned char)206;
unsigned short var_9 = (unsigned short)10699;
int zero = 0;
unsigned short var_10 = (unsigned short)25072;
unsigned short var_11 = (unsigned short)53276;
short var_12 = (short)12725;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
