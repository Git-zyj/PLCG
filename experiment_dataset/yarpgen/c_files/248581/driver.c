#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
int var_1 = -1982371068;
short var_3 = (short)-28144;
_Bool var_5 = (_Bool)0;
int var_6 = 1297805357;
unsigned long long int var_7 = 7629130850395021497ULL;
unsigned long long int var_8 = 16474582959805225531ULL;
unsigned int var_9 = 3753298989U;
int zero = 0;
unsigned short var_10 = (unsigned short)26049;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2606589390261187332LL;
unsigned char var_13 = (unsigned char)130;
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
