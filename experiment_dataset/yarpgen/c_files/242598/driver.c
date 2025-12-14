#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_8 = (unsigned char)105;
int var_10 = -863305966;
unsigned int var_12 = 254127777U;
short var_15 = (short)-28563;
int zero = 0;
signed char var_17 = (signed char)107;
unsigned char var_18 = (unsigned char)248;
signed char var_19 = (signed char)16;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
