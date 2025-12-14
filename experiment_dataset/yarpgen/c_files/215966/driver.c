#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)130;
unsigned short var_4 = (unsigned short)37861;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 101370177U;
unsigned int var_10 = 1733320127U;
int zero = 0;
int var_20 = 538520441;
unsigned char var_21 = (unsigned char)138;
unsigned int var_22 = 2907852459U;
int var_23 = 541873198;
unsigned short var_24 = (unsigned short)63730;
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
