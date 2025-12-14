#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28041;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 907234336U;
long long int var_8 = 6799260382533886839LL;
unsigned short var_11 = (unsigned short)61529;
int zero = 0;
int var_12 = -840973947;
unsigned char var_13 = (unsigned char)243;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
