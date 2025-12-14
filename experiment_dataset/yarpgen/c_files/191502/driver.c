#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)208;
unsigned short var_13 = (unsigned short)3842;
int zero = 0;
short var_14 = (short)-8494;
int var_15 = 1228978525;
unsigned short var_16 = (unsigned short)50711;
void init() {
}

void checksum() {
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
