#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20300;
unsigned int var_1 = 1982698037U;
_Bool var_11 = (_Bool)1;
int var_14 = 1730789791;
int zero = 0;
unsigned short var_17 = (unsigned short)34236;
long long int var_18 = -7104238411884538379LL;
unsigned char var_19 = (unsigned char)192;
unsigned short var_20 = (unsigned short)63939;
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
