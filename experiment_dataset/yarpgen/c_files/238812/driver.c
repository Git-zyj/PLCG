#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1457553109U;
_Bool var_5 = (_Bool)0;
int var_17 = 58998450;
unsigned char var_18 = (unsigned char)46;
int zero = 0;
int var_19 = 1998838270;
unsigned int var_20 = 2120052700U;
long long int var_21 = 3052837435620965572LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
