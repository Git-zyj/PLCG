#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3590405086U;
unsigned char var_7 = (unsigned char)58;
int zero = 0;
unsigned short var_13 = (unsigned short)41633;
short var_14 = (short)-15997;
unsigned int var_15 = 1341234985U;
unsigned long long int var_16 = 685906555890335971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
