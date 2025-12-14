#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -556134555;
unsigned int var_3 = 172454809U;
int var_4 = 267915021;
unsigned int var_5 = 4014841033U;
unsigned int var_6 = 2743780869U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 449499811U;
int var_11 = 904303323;
int zero = 0;
unsigned char var_13 = (unsigned char)125;
unsigned int var_14 = 231413681U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
