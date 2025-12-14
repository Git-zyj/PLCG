#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4364;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_10 = -1527379988;
int zero = 0;
short var_15 = (short)-27701;
unsigned char var_16 = (unsigned char)58;
void init() {
}

void checksum() {
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
