#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6064;
unsigned short var_3 = (unsigned short)35999;
unsigned short var_7 = (unsigned short)65441;
long long int var_8 = -8177270588560236308LL;
short var_9 = (short)-8689;
unsigned int var_10 = 196564760U;
unsigned int var_11 = 426417093U;
int zero = 0;
unsigned int var_12 = 2104157969U;
short var_13 = (short)-6804;
short var_14 = (short)2749;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
