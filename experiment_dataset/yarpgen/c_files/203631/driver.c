#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
int var_1 = -447244823;
unsigned short var_6 = (unsigned short)24708;
int var_11 = 2124850934;
int zero = 0;
unsigned long long int var_14 = 17329353865965747262ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)48045;
unsigned char var_17 = (unsigned char)183;
short var_18 = (short)1577;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
