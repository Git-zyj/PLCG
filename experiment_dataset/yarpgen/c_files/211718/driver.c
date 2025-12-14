#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27577;
unsigned long long int var_6 = 16000895589061777894ULL;
short var_8 = (short)-24639;
int var_9 = -445466253;
long long int var_14 = -8391995705859140747LL;
unsigned short var_19 = (unsigned short)2527;
int zero = 0;
int var_20 = -1528152536;
signed char var_21 = (signed char)60;
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
