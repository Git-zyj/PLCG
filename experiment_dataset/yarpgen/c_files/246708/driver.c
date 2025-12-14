#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1685663316U;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-25256;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2235420568U;
short var_11 = (short)2436;
int zero = 0;
unsigned char var_13 = (unsigned char)142;
unsigned short var_14 = (unsigned short)12472;
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
