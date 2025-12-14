#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3057069638177226887LL;
unsigned short var_4 = (unsigned short)52107;
int var_10 = -1294033655;
long long int var_11 = 7865075272034970851LL;
unsigned short var_14 = (unsigned short)23474;
int zero = 0;
unsigned short var_19 = (unsigned short)39067;
unsigned int var_20 = 2080895273U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
