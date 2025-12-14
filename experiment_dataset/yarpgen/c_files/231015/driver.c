#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13386;
_Bool var_6 = (_Bool)1;
unsigned char var_11 = (unsigned char)58;
int zero = 0;
unsigned char var_19 = (unsigned char)175;
unsigned char var_20 = (unsigned char)112;
unsigned int var_21 = 2948052198U;
signed char var_22 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
