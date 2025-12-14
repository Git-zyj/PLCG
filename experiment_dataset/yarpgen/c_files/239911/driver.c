#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 467603159;
unsigned char var_8 = (unsigned char)14;
unsigned short var_10 = (unsigned short)11975;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 442365532U;
short var_15 = (short)-7770;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
unsigned int var_21 = 2713601907U;
unsigned char var_22 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
