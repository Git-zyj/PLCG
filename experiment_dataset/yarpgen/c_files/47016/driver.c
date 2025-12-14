#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1898;
unsigned int var_3 = 4081010321U;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
unsigned long long int var_21 = 17566810634844673399ULL;
unsigned int var_22 = 1287626678U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
