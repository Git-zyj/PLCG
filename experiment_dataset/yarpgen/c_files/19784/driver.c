#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)4;
int var_6 = -483689190;
unsigned int var_7 = 3894622940U;
unsigned long long int var_8 = 8017141172138296105ULL;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned long long int var_12 = 7475069523086994228ULL;
unsigned short var_13 = (unsigned short)14255;
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
