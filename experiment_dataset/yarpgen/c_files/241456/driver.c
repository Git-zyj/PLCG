#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2250770843939039177LL;
int var_2 = 1339931997;
unsigned long long int var_4 = 1120574448797838062ULL;
int var_8 = -536729511;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
int var_14 = 555495327;
long long int var_15 = 5771458987707929851LL;
int var_16 = 22133225;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
