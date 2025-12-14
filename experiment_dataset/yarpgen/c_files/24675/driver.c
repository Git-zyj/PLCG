#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24227;
unsigned short var_1 = (unsigned short)23585;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)196;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)236;
unsigned short var_8 = (unsigned short)58476;
unsigned int var_9 = 1427198836U;
unsigned int var_10 = 731433425U;
unsigned short var_11 = (unsigned short)41994;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
unsigned int var_16 = 2649253925U;
unsigned short var_17 = (unsigned short)13859;
unsigned char var_18 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
