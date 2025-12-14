#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11977;
unsigned int var_7 = 952571024U;
signed char var_8 = (signed char)37;
int zero = 0;
unsigned short var_12 = (unsigned short)47664;
int var_13 = -1168260790;
unsigned char var_14 = (unsigned char)115;
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
