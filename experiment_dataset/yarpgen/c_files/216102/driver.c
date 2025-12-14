#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13920;
int var_2 = -3441916;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)102;
unsigned short var_15 = (unsigned short)36319;
void init() {
}

void checksum() {
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
