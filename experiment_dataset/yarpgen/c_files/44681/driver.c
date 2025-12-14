#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19564;
_Bool var_7 = (_Bool)0;
int var_12 = -2021404588;
int var_14 = -915751467;
int zero = 0;
unsigned int var_17 = 372078424U;
unsigned short var_18 = (unsigned short)48352;
int var_19 = -671957029;
long long int var_20 = -1687249358422102041LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
