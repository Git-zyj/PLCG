#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49042;
_Bool var_5 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-70;
unsigned char var_14 = (unsigned char)97;
signed char var_15 = (signed char)25;
unsigned short var_16 = (unsigned short)45619;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
