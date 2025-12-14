#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4227287981U;
int var_7 = 574931334;
short var_8 = (short)-1799;
int zero = 0;
unsigned int var_13 = 1408026255U;
long long int var_14 = -8506051657740716684LL;
unsigned char var_15 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
