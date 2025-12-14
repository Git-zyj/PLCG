#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
unsigned short var_5 = (unsigned short)56550;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)94;
unsigned short var_16 = (unsigned short)26656;
int zero = 0;
long long int var_20 = 1100469230072020166LL;
short var_21 = (short)-28625;
unsigned int var_22 = 3535757641U;
unsigned char var_23 = (unsigned char)75;
int var_24 = 2087303219;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
