#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 2835285416536772828ULL;
unsigned short var_10 = (unsigned short)41981;
long long int var_13 = 6257076391283132242LL;
int zero = 0;
int var_14 = 564559003;
_Bool var_15 = (_Bool)1;
short var_16 = (short)4576;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
