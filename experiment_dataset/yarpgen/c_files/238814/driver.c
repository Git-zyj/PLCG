#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7243293030284983205LL;
unsigned short var_1 = (unsigned short)9128;
long long int var_2 = 1519345590997930350LL;
unsigned long long int var_3 = 11527734524679605649ULL;
unsigned long long int var_4 = 2989215692775173794ULL;
unsigned short var_6 = (unsigned short)30351;
int zero = 0;
unsigned short var_10 = (unsigned short)28526;
int var_11 = 903914631;
int var_12 = -576598789;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
