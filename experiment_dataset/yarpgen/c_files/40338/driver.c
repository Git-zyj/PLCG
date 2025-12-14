#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1836633306U;
int var_2 = 677636786;
int var_4 = -1536478152;
short var_5 = (short)28691;
int var_6 = -1942483481;
int var_7 = -2102314134;
unsigned int var_9 = 4195556076U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6761636718700055895LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
