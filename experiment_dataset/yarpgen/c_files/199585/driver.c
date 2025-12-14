#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)95;
unsigned char var_5 = (unsigned char)232;
unsigned long long int var_9 = 9763385982189643574ULL;
unsigned char var_10 = (unsigned char)190;
unsigned short var_13 = (unsigned short)5403;
int zero = 0;
short var_15 = (short)32566;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
