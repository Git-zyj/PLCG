#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 771504799;
int var_8 = 1044487808;
unsigned int var_9 = 3681128902U;
int zero = 0;
unsigned int var_20 = 3877833564U;
long long int var_21 = 5906397703565679430LL;
int var_22 = -1463007660;
void init() {
}

void checksum() {
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
