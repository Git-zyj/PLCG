#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
unsigned int var_7 = 2652334977U;
unsigned char var_8 = (unsigned char)216;
unsigned short var_9 = (unsigned short)17641;
int zero = 0;
unsigned short var_11 = (unsigned short)46182;
unsigned char var_12 = (unsigned char)182;
int var_13 = -334915533;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
