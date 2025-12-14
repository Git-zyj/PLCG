#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7957992437805637128ULL;
unsigned long long int var_11 = 17825243024517162454ULL;
unsigned long long int var_17 = 8334246464743234397ULL;
unsigned short var_19 = (unsigned short)38365;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13497222403297141074ULL;
long long int var_22 = 5777370305537997LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
