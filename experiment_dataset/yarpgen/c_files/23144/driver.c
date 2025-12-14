#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48372;
long long int var_3 = -2694402334280416079LL;
signed char var_8 = (signed char)86;
short var_9 = (short)-21240;
int zero = 0;
long long int var_13 = -62571742635740473LL;
signed char var_14 = (signed char)58;
unsigned char var_15 = (unsigned char)234;
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
