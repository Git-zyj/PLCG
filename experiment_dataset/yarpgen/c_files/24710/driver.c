#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8290298959335821631ULL;
unsigned long long int var_7 = 11384735188999027444ULL;
unsigned short var_10 = (unsigned short)48562;
short var_11 = (short)-28017;
_Bool var_12 = (_Bool)0;
int var_13 = 115360504;
unsigned long long int var_14 = 275061179087258414ULL;
int zero = 0;
unsigned long long int var_16 = 3523931259344038337ULL;
int var_17 = -930731371;
unsigned int var_18 = 3277991341U;
int var_19 = 981738914;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
