#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4027240094U;
unsigned int var_2 = 3766111963U;
_Bool var_6 = (_Bool)1;
int var_8 = 1290209953;
int zero = 0;
unsigned short var_13 = (unsigned short)23646;
unsigned short var_14 = (unsigned short)19919;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
