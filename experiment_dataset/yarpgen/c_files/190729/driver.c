#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2131853560770992479LL;
unsigned long long int var_6 = 5963536043481755030ULL;
unsigned long long int var_7 = 14497208398269986337ULL;
int var_8 = 1649115129;
unsigned short var_9 = (unsigned short)12258;
int zero = 0;
unsigned int var_11 = 3298039072U;
int var_12 = 39420628;
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
