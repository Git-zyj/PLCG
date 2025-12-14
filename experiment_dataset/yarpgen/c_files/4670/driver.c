#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
long long int var_2 = 6628044801889199060LL;
unsigned int var_3 = 1673970808U;
unsigned char var_4 = (unsigned char)248;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-27095;
int var_7 = 619825788;
unsigned int var_9 = 324755089U;
long long int var_10 = -1732124933874140014LL;
unsigned long long int var_11 = 818630411676622807ULL;
short var_12 = (short)-25091;
int zero = 0;
short var_14 = (short)19047;
int var_15 = -1573391660;
short var_16 = (short)-15616;
unsigned char var_17 = (unsigned char)11;
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
