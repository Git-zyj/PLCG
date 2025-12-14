#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned long long int var_3 = 18198261150434846237ULL;
unsigned char var_5 = (unsigned char)84;
int var_6 = 20459892;
short var_9 = (short)5606;
int zero = 0;
unsigned long long int var_10 = 6398915012860040569ULL;
short var_11 = (short)15634;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
