#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1996815518891722767ULL;
int var_2 = 764086537;
unsigned short var_3 = (unsigned short)5143;
short var_4 = (short)30588;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)31108;
unsigned char var_12 = (unsigned char)99;
int zero = 0;
short var_14 = (short)-3703;
short var_15 = (short)-12237;
int var_16 = 577399278;
unsigned char var_17 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
