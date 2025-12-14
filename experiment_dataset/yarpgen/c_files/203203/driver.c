#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16089;
short var_4 = (short)15399;
unsigned int var_6 = 1757879845U;
int var_16 = -1338103458;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 2122422000;
int var_20 = 1160669233;
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
