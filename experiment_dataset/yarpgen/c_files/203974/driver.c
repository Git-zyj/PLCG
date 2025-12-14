#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2338;
unsigned int var_4 = 3730988022U;
unsigned char var_5 = (unsigned char)85;
short var_8 = (short)-15982;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6973709057363645829LL;
void init() {
}

void checksum() {
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
