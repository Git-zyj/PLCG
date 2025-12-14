#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)11998;
unsigned int var_8 = 1214483794U;
unsigned char var_12 = (unsigned char)21;
int var_13 = 896926937;
int zero = 0;
int var_15 = -1745037272;
unsigned char var_16 = (unsigned char)163;
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
