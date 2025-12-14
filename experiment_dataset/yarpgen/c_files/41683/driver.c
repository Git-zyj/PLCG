#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -976923763;
unsigned long long int var_5 = 3107813069407105087ULL;
short var_7 = (short)14441;
unsigned char var_8 = (unsigned char)140;
long long int var_14 = 6600253629174720296LL;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4584892678453533695LL;
int var_21 = -1649101570;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
