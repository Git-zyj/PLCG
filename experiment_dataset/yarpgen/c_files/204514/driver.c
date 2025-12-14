#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_8 = 2696560465214390112LL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-27128;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
unsigned int var_21 = 4132523270U;
unsigned int var_22 = 4241990832U;
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
