#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3633603931550309673LL;
unsigned short var_1 = (unsigned short)48707;
long long int var_2 = 2366345827330671348LL;
unsigned char var_3 = (unsigned char)22;
unsigned int var_4 = 1428818489U;
unsigned long long int var_5 = 6592683321281265960ULL;
unsigned char var_6 = (unsigned char)187;
long long int var_8 = 564173880351972020LL;
int zero = 0;
unsigned short var_10 = (unsigned short)54303;
unsigned long long int var_11 = 2160450420085733069ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
