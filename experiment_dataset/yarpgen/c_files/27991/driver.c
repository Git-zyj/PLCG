#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_1 = 753970759;
unsigned long long int var_13 = 7864419857036484505ULL;
unsigned char var_15 = (unsigned char)36;
int zero = 0;
unsigned char var_16 = (unsigned char)190;
unsigned int var_17 = 1323044665U;
unsigned char var_18 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
