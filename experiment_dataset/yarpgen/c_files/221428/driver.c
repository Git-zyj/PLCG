#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50835;
_Bool var_5 = (_Bool)1;
short var_7 = (short)30803;
unsigned char var_13 = (unsigned char)250;
int zero = 0;
short var_16 = (short)19750;
unsigned long long int var_17 = 16335399310470512678ULL;
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
