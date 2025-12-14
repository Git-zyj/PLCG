#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1744063553;
unsigned char var_7 = (unsigned char)68;
unsigned char var_8 = (unsigned char)209;
unsigned char var_11 = (unsigned char)51;
int var_13 = 447478720;
int zero = 0;
int var_14 = -864165424;
unsigned int var_15 = 1209828856U;
void init() {
}

void checksum() {
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
