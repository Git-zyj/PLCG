#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2960775260U;
_Bool var_4 = (_Bool)1;
long long int var_8 = -781886782807123721LL;
unsigned short var_10 = (unsigned short)16529;
int zero = 0;
unsigned short var_11 = (unsigned short)23419;
int var_12 = 524960273;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 410008862U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
