#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19730;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-27341;
int var_15 = -1832955214;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
unsigned char var_17 = (unsigned char)244;
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
