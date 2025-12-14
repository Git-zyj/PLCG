#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 939151449U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2474702892U;
unsigned int var_8 = 3292376410U;
unsigned int var_14 = 2854424018U;
long long int var_16 = -3745669674277058433LL;
unsigned char var_17 = (unsigned char)0;
unsigned char var_18 = (unsigned char)77;
int zero = 0;
unsigned char var_19 = (unsigned char)242;
long long int var_20 = 8086110894763475778LL;
unsigned char var_21 = (unsigned char)12;
void init() {
}

void checksum() {
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
