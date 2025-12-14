#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19979;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2645769580U;
long long int var_11 = 4905028851468164363LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)39225;
unsigned char var_21 = (unsigned char)88;
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
