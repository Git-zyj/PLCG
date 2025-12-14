#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned char var_3 = (unsigned char)178;
unsigned char var_7 = (unsigned char)151;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
short var_15 = (short)-31047;
short var_16 = (short)197;
unsigned char var_17 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
