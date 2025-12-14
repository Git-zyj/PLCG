#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37841;
unsigned char var_4 = (unsigned char)228;
signed char var_5 = (signed char)70;
signed char var_8 = (signed char)33;
unsigned int var_12 = 2809797283U;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)13321;
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
