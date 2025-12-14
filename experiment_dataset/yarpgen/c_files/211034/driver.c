#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41042;
signed char var_6 = (signed char)-52;
long long int var_8 = -3040003158126441811LL;
short var_12 = (short)8069;
long long int var_13 = 8196429128123148303LL;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
signed char var_16 = (signed char)35;
void init() {
}

void checksum() {
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
