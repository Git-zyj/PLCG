#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22569;
signed char var_8 = (signed char)111;
unsigned char var_11 = (unsigned char)253;
unsigned int var_12 = 3613847753U;
int zero = 0;
long long int var_13 = -7899960766207458383LL;
short var_14 = (short)-3518;
signed char var_15 = (signed char)-69;
long long int var_16 = -446728897400711437LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
