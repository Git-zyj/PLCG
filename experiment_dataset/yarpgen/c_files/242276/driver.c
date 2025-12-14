#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 460168810;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)21039;
short var_11 = (short)10556;
short var_12 = (short)-1134;
int zero = 0;
unsigned int var_14 = 1874233225U;
unsigned short var_15 = (unsigned short)12795;
unsigned char var_16 = (unsigned char)64;
void init() {
}

void checksum() {
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
