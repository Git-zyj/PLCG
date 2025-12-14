#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)46171;
signed char var_8 = (signed char)-42;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1521637092U;
int var_11 = -670791952;
unsigned char var_12 = (unsigned char)203;
int zero = 0;
short var_13 = (short)-4125;
unsigned char var_14 = (unsigned char)192;
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
