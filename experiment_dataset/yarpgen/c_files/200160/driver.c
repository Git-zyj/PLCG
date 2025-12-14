#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52039;
short var_4 = (short)-29499;
unsigned int var_5 = 1020277154U;
unsigned short var_8 = (unsigned short)30264;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 12150131072184404350ULL;
signed char var_14 = (signed char)45;
unsigned short var_15 = (unsigned short)20377;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
