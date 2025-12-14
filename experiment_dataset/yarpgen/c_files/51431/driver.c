#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16691;
short var_4 = (short)-21691;
unsigned char var_8 = (unsigned char)149;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-37;
unsigned char var_13 = (unsigned char)12;
int zero = 0;
short var_14 = (short)-413;
short var_15 = (short)23220;
void init() {
}

void checksum() {
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
