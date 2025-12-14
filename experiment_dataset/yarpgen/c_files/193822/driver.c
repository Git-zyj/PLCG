#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)229;
unsigned short var_4 = (unsigned short)19408;
int var_5 = 396869100;
unsigned char var_7 = (unsigned char)23;
unsigned int var_9 = 3884378924U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)12729;
unsigned int var_14 = 766374962U;
void init() {
}

void checksum() {
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
