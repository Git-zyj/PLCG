#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2049898783;
int var_2 = 183705172;
int var_8 = 547237823;
unsigned int var_12 = 2971224400U;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
