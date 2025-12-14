#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 547846748U;
short var_3 = (short)-4544;
unsigned char var_9 = (unsigned char)209;
unsigned char var_12 = (unsigned char)29;
int var_14 = 241362840;
unsigned short var_16 = (unsigned short)50928;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)6809;
unsigned short var_21 = (unsigned short)26518;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
