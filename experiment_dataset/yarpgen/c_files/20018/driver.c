#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 112835614U;
unsigned char var_8 = (unsigned char)5;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)20932;
short var_14 = (short)28997;
short var_15 = (short)-10797;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
