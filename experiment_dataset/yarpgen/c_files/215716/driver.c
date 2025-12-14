#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4557049386913142223ULL;
unsigned short var_5 = (unsigned short)19601;
long long int var_6 = -6516392251541300574LL;
short var_10 = (short)-21694;
unsigned long long int var_11 = 9145876278881407277ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60761;
unsigned int var_13 = 2278046076U;
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
