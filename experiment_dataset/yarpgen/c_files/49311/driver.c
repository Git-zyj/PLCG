#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned short var_4 = (unsigned short)16482;
unsigned char var_5 = (unsigned char)128;
int var_6 = -692228379;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)226;
int var_13 = 1571099115;
unsigned int var_14 = 4130155076U;
unsigned char var_16 = (unsigned char)136;
unsigned char var_17 = (unsigned char)12;
int zero = 0;
unsigned int var_19 = 1708289899U;
unsigned int var_20 = 2647754766U;
void init() {
}

void checksum() {
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
