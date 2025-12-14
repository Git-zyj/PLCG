#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2091341347;
unsigned int var_1 = 1260766370U;
long long int var_2 = -1458029995953750070LL;
unsigned short var_3 = (unsigned short)21336;
int var_4 = 55920948;
short var_13 = (short)-570;
int zero = 0;
short var_14 = (short)-32397;
unsigned short var_15 = (unsigned short)62159;
signed char var_16 = (signed char)-74;
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
