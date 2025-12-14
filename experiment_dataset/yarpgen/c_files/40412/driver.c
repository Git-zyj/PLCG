#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -248227284;
unsigned char var_6 = (unsigned char)83;
unsigned short var_7 = (unsigned short)47355;
unsigned long long int var_9 = 678960735838844245ULL;
int zero = 0;
signed char var_11 = (signed char)115;
unsigned short var_12 = (unsigned short)32478;
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
