#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 301933754U;
unsigned char var_3 = (unsigned char)151;
unsigned char var_7 = (unsigned char)156;
unsigned char var_10 = (unsigned char)188;
int zero = 0;
int var_12 = 1035123116;
short var_13 = (short)15600;
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
