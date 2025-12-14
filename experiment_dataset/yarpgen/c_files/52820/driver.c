#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned long long int var_5 = 12287137133227294372ULL;
unsigned short var_9 = (unsigned short)11414;
int zero = 0;
unsigned short var_11 = (unsigned short)60158;
unsigned char var_12 = (unsigned char)102;
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
