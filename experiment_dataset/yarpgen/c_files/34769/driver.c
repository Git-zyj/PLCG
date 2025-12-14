#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)0;
unsigned short var_7 = (unsigned short)60123;
long long int var_8 = 97037582469592597LL;
int zero = 0;
signed char var_11 = (signed char)4;
long long int var_12 = -686862990595149731LL;
signed char var_13 = (signed char)-6;
unsigned short var_14 = (unsigned short)8178;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
