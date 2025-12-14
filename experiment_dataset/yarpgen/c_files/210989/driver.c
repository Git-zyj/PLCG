#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27169;
short var_5 = (short)24723;
signed char var_6 = (signed char)125;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)27;
unsigned char var_11 = (unsigned char)185;
unsigned short var_12 = (unsigned short)46342;
int zero = 0;
unsigned char var_13 = (unsigned char)230;
signed char var_14 = (signed char)113;
void init() {
}

void checksum() {
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
