#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6961713740851942912ULL;
unsigned short var_2 = (unsigned short)43651;
unsigned char var_9 = (unsigned char)174;
unsigned char var_11 = (unsigned char)8;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2636543747U;
_Bool var_19 = (_Bool)1;
int var_20 = -1270048115;
unsigned int var_21 = 3350373816U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
