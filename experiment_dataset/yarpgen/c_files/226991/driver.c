#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3538;
_Bool var_7 = (_Bool)1;
short var_11 = (short)22762;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
unsigned short var_16 = (unsigned short)45862;
unsigned long long int var_17 = 13660000757450614019ULL;
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
