#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36161;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)157;
short var_13 = (short)-15983;
unsigned short var_15 = (unsigned short)51431;
int zero = 0;
short var_20 = (short)6315;
short var_21 = (short)-5484;
void init() {
}

void checksum() {
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
