#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16278691532428937404ULL;
unsigned short var_7 = (unsigned short)12134;
unsigned char var_12 = (unsigned char)151;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2997946171U;
unsigned char var_20 = (unsigned char)30;
unsigned short var_21 = (unsigned short)64611;
long long int var_22 = 7075822334738323483LL;
unsigned int var_23 = 3404675036U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
