#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 981627630U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-27597;
unsigned int var_8 = 856311965U;
unsigned short var_9 = (unsigned short)22753;
int zero = 0;
unsigned short var_10 = (unsigned short)11163;
unsigned char var_11 = (unsigned char)54;
short var_12 = (short)22651;
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
