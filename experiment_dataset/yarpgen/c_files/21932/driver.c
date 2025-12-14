#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1287959462;
short var_3 = (short)-15083;
unsigned short var_4 = (unsigned short)48924;
unsigned short var_8 = (unsigned short)6593;
unsigned short var_9 = (unsigned short)54541;
int zero = 0;
int var_10 = 367371602;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
