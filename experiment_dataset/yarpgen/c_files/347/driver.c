#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)42;
unsigned short var_4 = (unsigned short)46673;
_Bool var_8 = (_Bool)1;
int var_17 = -653135950;
unsigned long long int var_19 = 3917806719317734376ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)233;
unsigned short var_21 = (unsigned short)32102;
unsigned short var_22 = (unsigned short)54329;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
