#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3470732567603289985LL;
unsigned short var_10 = (unsigned short)50539;
signed char var_12 = (signed char)-73;
int zero = 0;
unsigned char var_19 = (unsigned char)255;
signed char var_20 = (signed char)70;
short var_21 = (short)-30916;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
