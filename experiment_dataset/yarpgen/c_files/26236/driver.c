#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1615011583;
unsigned long long int var_2 = 4226647509195607060ULL;
int var_3 = 1248022838;
int var_5 = 425124794;
unsigned char var_7 = (unsigned char)65;
signed char var_10 = (signed char)33;
unsigned int var_11 = 1667431187U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)23842;
unsigned int var_14 = 3746287794U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
