#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 615529269990199810LL;
short var_3 = (short)-20811;
unsigned long long int var_5 = 15109215759499046932ULL;
int var_7 = 1245738379;
unsigned char var_8 = (unsigned char)28;
long long int var_10 = 1892112012665178363LL;
int var_11 = -497746731;
int zero = 0;
int var_12 = -567511706;
unsigned long long int var_13 = 2048778395337578720ULL;
unsigned short var_14 = (unsigned short)23964;
int var_15 = -464062954;
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
