#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -194013546;
unsigned char var_2 = (unsigned char)220;
int var_3 = -1784040404;
int var_4 = -369116108;
_Bool var_8 = (_Bool)1;
short var_10 = (short)3896;
int zero = 0;
long long int var_11 = -5884084894008261176LL;
long long int var_12 = -3235723284460720610LL;
short var_13 = (short)10782;
unsigned char var_14 = (unsigned char)82;
short var_15 = (short)-1830;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
