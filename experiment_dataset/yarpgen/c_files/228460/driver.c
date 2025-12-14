#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)16;
unsigned short var_9 = (unsigned short)32530;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)31074;
unsigned char var_16 = (unsigned char)83;
int var_17 = -1135916386;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
