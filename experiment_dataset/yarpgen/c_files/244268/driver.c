#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29604;
short var_4 = (short)-27122;
int zero = 0;
unsigned short var_13 = (unsigned short)34231;
long long int var_14 = -7412673556538984798LL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)22234;
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
