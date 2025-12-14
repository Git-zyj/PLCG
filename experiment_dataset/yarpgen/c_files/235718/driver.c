#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4165;
unsigned short var_3 = (unsigned short)4778;
unsigned char var_9 = (unsigned char)12;
long long int var_15 = -7897748291243736749LL;
unsigned long long int var_18 = 9381932949870521003ULL;
int zero = 0;
unsigned int var_20 = 2819847828U;
signed char var_21 = (signed char)-24;
unsigned int var_22 = 3988795358U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
