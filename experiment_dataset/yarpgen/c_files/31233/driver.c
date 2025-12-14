#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33966;
unsigned char var_1 = (unsigned char)111;
_Bool var_5 = (_Bool)0;
long long int var_6 = -958400877768275326LL;
signed char var_7 = (signed char)-67;
short var_9 = (short)17997;
signed char var_11 = (signed char)-71;
short var_12 = (short)-7751;
short var_14 = (short)32502;
int zero = 0;
unsigned short var_16 = (unsigned short)17763;
unsigned char var_17 = (unsigned char)14;
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
