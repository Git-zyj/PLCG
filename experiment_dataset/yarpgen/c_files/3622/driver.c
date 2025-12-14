#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16391;
unsigned short var_4 = (unsigned short)10880;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1389783855U;
int zero = 0;
unsigned int var_11 = 233606329U;
unsigned short var_12 = (unsigned short)19865;
void init() {
}

void checksum() {
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
