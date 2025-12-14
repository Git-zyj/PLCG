#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54511;
long long int var_3 = -2424813845498068556LL;
unsigned short var_4 = (unsigned short)12628;
int var_5 = -2257637;
unsigned short var_8 = (unsigned short)63233;
unsigned short var_10 = (unsigned short)53130;
short var_12 = (short)-15367;
int zero = 0;
long long int var_15 = -1062792827088742052LL;
unsigned short var_16 = (unsigned short)60232;
unsigned short var_17 = (unsigned short)48470;
unsigned int var_18 = 63249657U;
unsigned long long int var_19 = 10392057041162380281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
