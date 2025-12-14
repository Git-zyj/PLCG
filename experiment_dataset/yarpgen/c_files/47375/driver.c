#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
long long int var_3 = -4162200484808143238LL;
unsigned int var_4 = 2735375515U;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)124;
int zero = 0;
unsigned char var_12 = (unsigned char)69;
unsigned short var_13 = (unsigned short)41470;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
