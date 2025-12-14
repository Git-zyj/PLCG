#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14921;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 56883213U;
unsigned char var_7 = (unsigned char)41;
unsigned short var_8 = (unsigned short)46949;
unsigned int var_10 = 355012080U;
unsigned int var_14 = 2539078424U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 440295828;
unsigned int var_20 = 682575580U;
int var_21 = -1055218767;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
