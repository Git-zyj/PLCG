#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8485964414823848968LL;
long long int var_14 = 4758392603370661734LL;
int var_17 = 7605016;
int zero = 0;
signed char var_19 = (signed char)75;
unsigned int var_20 = 1508933787U;
unsigned char var_21 = (unsigned char)74;
unsigned char var_22 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
