#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 535420503;
unsigned long long int var_5 = 8716148681539781360ULL;
unsigned int var_6 = 1352514125U;
int var_10 = 1855048369;
unsigned int var_12 = 2695755062U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3656337711U;
unsigned short var_17 = (unsigned short)18296;
unsigned short var_18 = (unsigned short)29055;
unsigned int var_19 = 3269418196U;
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
