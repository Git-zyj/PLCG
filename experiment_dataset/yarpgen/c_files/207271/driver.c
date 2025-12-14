#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23167;
long long int var_1 = -2196108251156742392LL;
unsigned short var_6 = (unsigned short)19570;
signed char var_8 = (signed char)90;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1442617141;
unsigned char var_17 = (unsigned char)60;
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
