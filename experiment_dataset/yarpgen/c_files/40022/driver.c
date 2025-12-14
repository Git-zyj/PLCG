#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)113;
long long int var_5 = -877373102840058602LL;
unsigned short var_6 = (unsigned short)20345;
int var_8 = -1211081108;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-36;
unsigned char var_19 = (unsigned char)193;
short var_20 = (short)-11663;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
