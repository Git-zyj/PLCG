#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1304130254182634818LL;
int var_1 = -746365600;
unsigned long long int var_2 = 2364287792829953549ULL;
short var_5 = (short)27942;
_Bool var_7 = (_Bool)0;
short var_8 = (short)17588;
unsigned short var_10 = (unsigned short)13915;
int zero = 0;
unsigned int var_12 = 3073156796U;
unsigned int var_13 = 1278994898U;
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
