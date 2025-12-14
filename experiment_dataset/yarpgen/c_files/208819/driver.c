#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)21;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)198;
unsigned long long int var_8 = 6531688221318081314ULL;
int zero = 0;
short var_17 = (short)6525;
unsigned short var_18 = (unsigned short)28823;
unsigned int var_19 = 1989902514U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
