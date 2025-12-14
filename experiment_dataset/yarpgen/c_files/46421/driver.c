#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9512804115923129379ULL;
unsigned int var_6 = 3442259448U;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8424147173135668569LL;
short var_16 = (short)-14059;
void init() {
}

void checksum() {
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
