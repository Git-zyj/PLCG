#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 377328664U;
unsigned int var_6 = 668321277U;
unsigned char var_8 = (unsigned char)13;
short var_9 = (short)-9811;
int zero = 0;
unsigned short var_10 = (unsigned short)38242;
unsigned long long int var_11 = 11214109616759559505ULL;
unsigned short var_12 = (unsigned short)36287;
int var_13 = 355788479;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
