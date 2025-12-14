#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4237239352U;
unsigned char var_4 = (unsigned char)168;
unsigned int var_5 = 2173630471U;
short var_6 = (short)-6085;
short var_8 = (short)16267;
short var_9 = (short)-2807;
int zero = 0;
unsigned int var_12 = 1428314890U;
unsigned int var_13 = 3674451973U;
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
