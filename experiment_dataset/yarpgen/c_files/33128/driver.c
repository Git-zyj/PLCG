#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3548957336U;
unsigned short var_3 = (unsigned short)11044;
unsigned char var_6 = (unsigned char)19;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 4031895280U;
short var_16 = (short)-8056;
void init() {
}

void checksum() {
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
