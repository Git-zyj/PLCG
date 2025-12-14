#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1787957494;
unsigned long long int var_2 = 2706310413121994818ULL;
unsigned short var_3 = (unsigned short)53547;
long long int var_4 = -8309190301778972840LL;
unsigned char var_5 = (unsigned char)113;
signed char var_6 = (signed char)-83;
signed char var_10 = (signed char)-113;
int zero = 0;
int var_11 = -1338541064;
unsigned char var_12 = (unsigned char)162;
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
