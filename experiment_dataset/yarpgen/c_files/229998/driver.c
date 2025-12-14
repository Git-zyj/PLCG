#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18546;
_Bool var_4 = (_Bool)1;
int var_7 = 1245833840;
unsigned long long int var_8 = 9784309735886137923ULL;
unsigned short var_9 = (unsigned short)47842;
int zero = 0;
unsigned short var_11 = (unsigned short)57091;
unsigned char var_12 = (unsigned char)140;
unsigned int var_13 = 3790987823U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
