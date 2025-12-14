#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7518190251814559375ULL;
unsigned long long int var_8 = 13501705342990677724ULL;
short var_9 = (short)-647;
unsigned short var_16 = (unsigned short)30906;
int zero = 0;
unsigned long long int var_20 = 9634280497006778388ULL;
short var_21 = (short)-7085;
short var_22 = (short)13463;
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
