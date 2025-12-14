#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1140;
unsigned short var_7 = (unsigned short)25803;
unsigned short var_9 = (unsigned short)48861;
unsigned short var_14 = (unsigned short)59754;
long long int var_16 = -8117368795529165755LL;
unsigned short var_17 = (unsigned short)43487;
int zero = 0;
unsigned int var_19 = 158484699U;
unsigned char var_20 = (unsigned char)91;
short var_21 = (short)16725;
long long int var_22 = -8573823277549714163LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
