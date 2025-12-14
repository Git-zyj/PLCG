#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
long long int var_2 = 8913613694916703522LL;
long long int var_10 = -1106517565094563681LL;
long long int var_11 = 2412529865622347677LL;
unsigned char var_15 = (unsigned char)198;
unsigned char var_16 = (unsigned char)254;
int zero = 0;
long long int var_20 = 1562779625911290827LL;
long long int var_21 = 4762511039332798380LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
