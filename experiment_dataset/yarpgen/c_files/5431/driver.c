#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3418048230U;
unsigned long long int var_8 = 7198379798906521406ULL;
int var_9 = -281163254;
unsigned char var_10 = (unsigned char)92;
int zero = 0;
unsigned short var_11 = (unsigned short)2635;
short var_12 = (short)-17430;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
