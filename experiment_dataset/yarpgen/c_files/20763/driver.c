#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11135317502324559967ULL;
unsigned int var_5 = 3143850932U;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
unsigned short var_13 = (unsigned short)54403;
int var_14 = -1548725434;
unsigned short var_15 = (unsigned short)32340;
int var_16 = -622850035;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
