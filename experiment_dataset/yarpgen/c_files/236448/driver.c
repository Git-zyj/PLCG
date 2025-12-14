#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-57;
unsigned short var_11 = (unsigned short)58227;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)53;
unsigned long long int var_18 = 9294624509037695917ULL;
long long int var_19 = -6738991886940963874LL;
int zero = 0;
short var_20 = (short)24084;
int var_21 = 135098108;
_Bool var_22 = (_Bool)1;
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
