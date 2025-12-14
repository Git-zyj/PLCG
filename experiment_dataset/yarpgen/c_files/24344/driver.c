#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2156595580U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)38085;
short var_9 = (short)24718;
unsigned char var_11 = (unsigned char)230;
unsigned int var_15 = 3994930223U;
int zero = 0;
int var_20 = 956288926;
unsigned char var_21 = (unsigned char)50;
unsigned long long int var_22 = 12425028647315683111ULL;
int var_23 = 652439324;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
