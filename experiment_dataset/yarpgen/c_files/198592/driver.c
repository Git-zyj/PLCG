#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10045917347246485673ULL;
unsigned short var_8 = (unsigned short)39744;
long long int var_13 = 1622722440537069179LL;
int zero = 0;
unsigned int var_14 = 3585261059U;
short var_15 = (short)14133;
unsigned long long int var_16 = 4469166525861163009ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
