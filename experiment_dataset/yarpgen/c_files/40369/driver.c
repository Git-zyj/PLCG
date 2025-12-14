#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32305;
short var_3 = (short)19959;
unsigned char var_4 = (unsigned char)11;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)115;
unsigned short var_10 = (unsigned short)46615;
int zero = 0;
int var_13 = 132002637;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)78;
unsigned char var_16 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
