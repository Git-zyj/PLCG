#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1654;
unsigned long long int var_2 = 3814120528161393233ULL;
unsigned long long int var_3 = 2210795110682557620ULL;
short var_4 = (short)-17809;
int var_5 = 1194663757;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -8510848979278585599LL;
_Bool var_11 = (_Bool)0;
int var_12 = -1906034443;
long long int var_13 = 2220949588513375569LL;
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
