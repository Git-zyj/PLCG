#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16361;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 3480845794162293784ULL;
unsigned char var_14 = (unsigned char)63;
unsigned int var_19 = 1354675615U;
int zero = 0;
unsigned int var_20 = 3654184468U;
short var_21 = (short)22391;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
