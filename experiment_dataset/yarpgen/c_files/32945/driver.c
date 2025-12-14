#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7890872372970069704LL;
short var_2 = (short)-16761;
short var_3 = (short)-21352;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-17190;
int zero = 0;
unsigned char var_11 = (unsigned char)53;
unsigned long long int var_12 = 156267877300878317ULL;
int var_13 = 2129505723;
void init() {
}

void checksum() {
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
