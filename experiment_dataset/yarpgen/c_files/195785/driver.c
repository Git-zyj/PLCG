#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10470;
signed char var_2 = (signed char)113;
unsigned long long int var_3 = 10703062445658206642ULL;
unsigned int var_4 = 3455800371U;
unsigned char var_6 = (unsigned char)207;
signed char var_9 = (signed char)-122;
int zero = 0;
long long int var_12 = 7000934479580749522LL;
long long int var_13 = -7844773842134457160LL;
void init() {
}

void checksum() {
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
