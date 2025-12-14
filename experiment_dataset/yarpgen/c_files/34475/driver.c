#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
short var_4 = (short)-20606;
unsigned char var_7 = (unsigned char)92;
signed char var_13 = (signed char)-56;
int zero = 0;
unsigned short var_20 = (unsigned short)46390;
unsigned int var_21 = 3426793075U;
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
