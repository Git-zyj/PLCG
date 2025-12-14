#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
long long int var_3 = 8419523668212265010LL;
unsigned char var_13 = (unsigned char)54;
int zero = 0;
unsigned char var_15 = (unsigned char)60;
unsigned int var_16 = 4109928358U;
signed char var_17 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
