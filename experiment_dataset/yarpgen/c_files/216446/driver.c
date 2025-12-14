#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
long long int var_1 = -4566957482442286530LL;
_Bool var_2 = (_Bool)0;
int var_6 = -1332073427;
unsigned int var_10 = 2911418627U;
int zero = 0;
unsigned int var_18 = 2007569728U;
short var_19 = (short)-15393;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
