#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3140;
unsigned short var_4 = (unsigned short)13256;
unsigned char var_5 = (unsigned char)28;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
unsigned char var_10 = (unsigned char)105;
unsigned char var_11 = (unsigned char)118;
unsigned int var_12 = 4229751746U;
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
