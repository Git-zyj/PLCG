#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 371941888U;
unsigned long long int var_2 = 15558626302151728323ULL;
unsigned short var_6 = (unsigned short)29429;
unsigned short var_7 = (unsigned short)4188;
unsigned int var_9 = 4294447446U;
unsigned int var_12 = 1712171854U;
unsigned char var_13 = (unsigned char)35;
short var_15 = (short)-10098;
int zero = 0;
unsigned char var_18 = (unsigned char)207;
unsigned int var_19 = 1393810268U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
