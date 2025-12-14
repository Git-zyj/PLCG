#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-428;
unsigned long long int var_5 = 1414606142164537100ULL;
int var_6 = 1270846679;
unsigned short var_11 = (unsigned short)60909;
int zero = 0;
long long int var_14 = -5994960129434078594LL;
unsigned int var_15 = 33102803U;
_Bool var_16 = (_Bool)0;
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
