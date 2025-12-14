#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)19871;
int var_9 = -154068219;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
signed char var_12 = (signed char)62;
short var_13 = (short)7209;
unsigned short var_14 = (unsigned short)38995;
unsigned char var_15 = (unsigned char)179;
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
