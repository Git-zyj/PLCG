#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -515080504;
long long int var_5 = 5217411332987761160LL;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
short var_12 = (short)-14509;
unsigned long long int var_13 = 14464977332269360081ULL;
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
