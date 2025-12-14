#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-27213;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)146;
unsigned short var_7 = (unsigned short)15504;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -5903866866547100081LL;
long long int var_12 = -8656065338405032523LL;
unsigned short var_13 = (unsigned short)20579;
unsigned int var_14 = 2559773942U;
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
